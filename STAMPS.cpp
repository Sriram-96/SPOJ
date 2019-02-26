#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int limit,n,j,sum=0;
		cin>>limit>>n;
		int a[n];
		for(j=0;j<n;j++)
			cin>>a[j];
		sort(a,a+n,greater<int>());
		for(j=0;j<n;j++)
		{
			sum+=a[j];
			if(sum>=limit)
			{
				cout<<"Scenario #"<<i+1<<":"<<endl<<j+1<<endl<<endl;
				break;
			}
		}
		if(j==n)
			cout<<"Scenario #"<<i+1<<":"<<endl<<"impossible"<<endl<<endl;
	}
}
