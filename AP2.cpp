#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,z,n,a,d,i,curr;
		cin>>x>>y>>z;
		n=2*z/(x+y);
//		if(n==5)
//		{
//			a=z/5;
//			d=(y-a)/(n-3);
//		}
//		else
//		{
//			d=(y-x)/(n-5);
//			a=x-(2*d);
//		}
		d=(y-x)/(n-5);
		a=x-(2*d);
		cout<<n<<endl;
		curr=a;
		for(i=0;i<n;i++)
		{
			cout<<curr<<" ";
			curr+=d;
		}
		cout<<endl;
	}

}
