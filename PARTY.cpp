#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,max_cost,n;
	while(1==1)
	{
		cin>>max_cost>>n;
		if(max_cost==0 && n==0)
			return 0;
		int cost[n],fun[n],dp[max_cost][n],possible_cost[max_cost][n];
		for(i=0;i<n;i++)
			cin>>cost[i]>>fun[i];
		for(i=0;i<max_cost;i++)
			if(cost[0]>i+1)
			{
				dp[i][0]=0;
				possible_cost[i][0]=0;
			}
			else
			{
				dp[i][0]=fun[0];
				possible_cost[i][0]=cost[0];
			}
		for(j=0;j<n;j++)
		{
			dp[0][j]=0;
			possible_cost[0][j]=0;
		}
		for(i=1;i<max_cost;i++)
		{
			for(j=1;j<n;j++)
			{
				if(i-cost[j]>=0)
				{
					if(fun[j]+dp[i-cost[j]][j-1] > dp[i][j-1])
					{
						dp[i][j] = fun[j]+dp[i-cost[j]][j-1];
						possible_cost[i][j] = cost[j]+possible_cost[i-cost[j]][j-1];
					}
					else if(fun[j]+dp[i-cost[j]][j-1] == dp[i][j-1])
					{
						dp[i][j] = fun[j]+dp[i-cost[j]][j-1];
						possible_cost[i][j] = min(cost[j]+possible_cost[i-cost[j]][j-1],possible_cost[i][j-1]);
					}
					else
					{
						dp[i][j] = dp[i][j-1];
						possible_cost[i][j] = possible_cost[i][j-1];
					}
				}
				else
				{
					dp[i][j] = dp[i][j-1];
					possible_cost[i][j] = possible_cost[i][j-1];
				}
			}
		}
//		for(i=0;i<max_cost;i++)
//		{
//			for(j=0;j<n;j++)
//			{
//				cout<<dp[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<possible_cost[max_cost-1][n-1]<<" "<<dp[max_cost-1][n-1]<<endl;
	}
}
