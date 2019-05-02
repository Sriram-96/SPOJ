#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,max=0;
	cin>>t;
	long long int n[t],m[t];
	for(i=0;i<t;i++)
	{
		cin>>n[i]>>m[i];
		if(m[i]>max)
			max=m[i];
	}
	long long int fib[max+3];
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<max+3;i++)
	{
		fib[i]=(fib[i-1]+fib[i-2])%1000000007;
	}
	for(i=0;i<t;i++)
	{
		if(fib[m[i]+2]-fib[n[i]+1]>=0)
			cout<<fib[m[i]+2]-fib[n[i]+1]<<endl;
		else
			cout<<1000000007+fib[m[i]+2]-fib[n[i]+1]<<endl;
	}
}
