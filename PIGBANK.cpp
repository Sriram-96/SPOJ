#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,piggy_weight,n;
	cin>>t;
	while(t--)
	{
		cin>>i>>piggy_weight;
		piggy_weight-=i;
		cin>>n;
		int dp[piggy_weight+1]={-1},value[n],weight[n],min;
		dp[0]=0;
		dp[1]=INT_MAX;
		for(i=0;i<n;i++)
		{
			cin>>value[i]>>weight[i];
			if(weight[i]==1 && value[i]<dp[1])
				dp[1]=value[i];
		}
		if(dp[1]==INT_MAX)
			dp[1]=-1;
		for(i=2;i<=piggy_weight;i++)
		{
			min=INT_MAX;
			for(j=0;j<n;j++)
			{
				if(i-weight[j]>=0 && dp[i-weight[j]]+value[j]<min && dp[i-weight[j]]!=-1)
				{
					min=dp[i-weight[j]]+value[j];
				}
			}
			if(min==INT_MAX)
				dp[i]=-1;
			else
				dp[i]=min;
		}
//		for(i=1;i<=piggy_weight;i++)
//			cout<<dp[i]<<" ";
//		cout<<endl;
		if(dp[piggy_weight]==-1)
			cout<<"This is impossible."<<endl;
		else
			cout<<"The minimum amount of money in the piggy-bank is "<<dp[piggy_weight]<<"."<<endl;
	}
}
