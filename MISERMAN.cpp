#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n],dp[m][n],ans=INT_MAX;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(j=0;j<n;j++)
		dp[0][j]=a[0][j];
	for(i=1;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
			}
			else if(j==n-1)
			{
				dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
			}
			else
			{
				dp[i][j]=a[i][j]+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
			}
		}
	}
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//			cout<<dp[i][j]<<"  ";
//		cout<<endl;	
//	}
	for(j=0;j<n;j++)
		if(dp[m-1][j]<ans)
			ans=dp[m-1][j];
	cout<<ans;
	return 0;
}

