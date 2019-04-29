#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,sum=0,ans=0;
	cin>>n>>max;
	int a[n],i,j,k;
	for(i=0;i<n;i++)
		cin>>a[i];
	sum=a[0];
	for(i=0,j=0;i<n&&j<n;)
	{
		while(sum<=max)
		{
			if(j+1<n && sum+a[j+1]>max)
				break;
			if(j+1>=n)
				break;
			sum+=a[j+1];
			j++;
		}
		if(sum>ans)
			ans=sum;
		sum-=a[i];
		i++;
	}
	cout<<ans;
}
