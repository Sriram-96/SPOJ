#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(1==1)
	{
		cin>>n;
		if(n==-1)
			return 0;
		int a[n],i,sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0)
			cout<<-1<<endl;
		else
		{
			int more=0;
			for(i=0;i<n;i++)
			{
				if(a[i]>sum/n)
					more+=a[i]-(sum/n);
			}
			cout<<more<<endl;
		}
	}
}
