#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,adder,i=1,ans=0;
	cin>>n;
	adder=n;
	while(adder>0)
	{
		ans+=adder;
		adder=((n/(i+1))-i);
		i++;
	}
	cout<<ans;
}
