#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,j,i;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		cin>>n;
		long long int a[n],dp[n]={0};
		for(i=0;i<n;i++)
			cin>>a[i];
		if(n==0)
		{
			cout<<"Case "<<j<<": "<<0<<endl;
			continue;
		}
		else if(n==1)
		{
			cout<<"Case "<<j<<": "<<a[0]<<endl;
			continue;
		}
		else
		{
			dp[0]=a[0];
			dp[1]=a[1];
			for(i=2;i<n;i++)
			{
				if(i==2)
					dp[i] = a[i] + a[0];
				else
					dp[i] = a[i] + max(dp[i-2],dp[i-3]);
//				cout<<dp[i]<<"*";
			}
			cout<<"Case "<<j<<": "<<max(dp[n-1],dp[n-2])<<endl;
		}
	}
}
