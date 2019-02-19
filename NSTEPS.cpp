#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==0&&b==0)
		{
			cout<<0<<endl;
			continue;
		}
		if(a==b)
			if(((a+b)/2)%2==1)
				cout<<a+b-1<<endl;
			else
				cout<<a+b<<endl;
		else if(a-b==2)
			if(((a+b)/2)%2==1)
				cout<<a+b<<endl;
			else
				cout<<a+b-1<<endl;
		else
			cout<<"No Number"<<endl;
	}
}
