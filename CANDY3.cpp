#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,x,sum=0,a;
		cin>>n;
		x=n;
		while(n--)
		{
			cin>>a;
			sum=(sum+(a%x))%x;
		}
		if(sum==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
