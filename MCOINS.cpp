# include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,i;
	cin>>k>>l>>m;
	int a[m], max=0;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	int dp[max+1];
	dp[0]=1;
	dp[1]=1;
	dp[2]=1;
	for(i=0;i<max+1;i++)
	{
		if(dp[i-1]==2)
			dp[i]=1;
		else if(i-k>=0 && dp[i-k]==2)
		{
			dp[i]=1;
		}
		else if(i-l>=0 && dp[i-l]==2)
		{
			dp[i]=1;
		}
		else
			dp[i]=2;
	}
	for(i=0;i<m;i++)
	{
		if(dp[a[i]] == 1)
			cout<<"A";
		else
			cout<<"B";
	}
}
