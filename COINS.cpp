#include<bits/stdc++.h>
using namespace std;

long long int maxim(long long int a, long long int b)
{
	if(a>b)
		return a;
	else
		return b;	
}

int main()
{
	long long int n,a[10],count=0,max=0,i;
	while(cin>>n)
	{
		a[count++]=n;
		if(n>max)
			max=n;
	}
	long long int dp[max];
	dp[0]=1;
	for(i=1;i<max;i++)
	{
		if(((i+1)/4)-1>=0)
			dp[i] = maxim(i+1,(dp[((i+1)/2)-1]+dp[((i+1)/3)-1]+dp[((i+1)/4)-1]));
		else
			dp[i] = i+1;
		// cout<<"*"<<dp[i];
	}
	// cout<<endl;
	for(i=0;i<count;i++)
		cout<<dp[a[i]-1]<<endl;
}
