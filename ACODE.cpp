#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(1==1)
	{
		cin>>s;
		if(s.compare("0")==0)
			return 0;
		int n=s.length(),i;
		int dp[n]={0};
		dp[0]=1;
		if(s[1]=='0' && (s[0]=='1' || s[0]=='2'))
			dp[1]=1;
		if(s[1]!='0' && s[0]=='0' || s[0]=='1' || (s[0]=='2' && s[1]>='0' && s[1]<='6'))
			
		for(i=2;i<n;i++)
		{
			dp[i]=dp[i-1];
			if(s[i]=='0')
			{
				if(s[i-1]=='1' || s[i-1]=='2')
					dp[i]=dp[i]+1;
			}
			else
			{
				if(s[i-1]=='0' || s[i-1]=='1' || (s[i-1]=='2' && s[i]>='0' && s[i]<='6'))
					dp[i]=dp[i]+1;
			}
		}
		for(i=0;i<n;i++)
			cout<<"*"<<dp[i];
		cout<<endl;
		cout<<dp[n-1]<<endl;
	}
}
