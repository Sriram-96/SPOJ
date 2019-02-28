#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j,ans=0;
		cin>>m>>n;
		int a[m][n],dp[m][n];
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
					dp[i][j] = a[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
				else if(j==n-1)
					dp[i][j] = a[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
				else
					dp[i][j] = a[i][j]+max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
			}
		}
		for(j=0;j<n;j++)
			if(dp[m-1][j]>ans)
				ans=dp[m-1][j];
		cout<<ans<<endl;
	}
}
