#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1==1)
	{
		int n;
		cin>>n;
		if(n==0)
			return 0;
		int a[n],i,b[100000];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]-1]=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				cout<<"not ambiguous"<<endl;
				break;
			}
		}
		if(i==n)
			cout<<"ambiguous"<<endl;
	}
}
