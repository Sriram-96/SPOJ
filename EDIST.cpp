#include<bits/stdc++.h>
using namespace std;

int min(int a, int b, int c)
{
	int min;
	if(a<b)
		min=a;
	else
		min=b;
	if(c<min)
		return c;
	else
		return min;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int m=a.length(),n=b.length(),i,j;
		int dp[m+1][n+1];
		if(m==0||n==0)
		{
			cout<<0<<endl;
			continue;
		}
		for(i=0;i<=m;i++)
		{
			dp[i][0]=i;
//			cout<<dp[i][0]<<"#";	
		}
		for(i=0;i<=n;i++)
		{
			dp[0][i]=i;
//			cout<<dp[0][i]<<"&";
		}
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i-1]==b[j-1])
					dp[i][j]=dp[i-1][j-1];
				else
					dp[i][j]=1+min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]);
//				cout<<dp[i][j]<<"*";
			}
		}
		cout<<dp[m][n]<<endl;
	}
}
