#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,i;
	double ans;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		ans = (4*a*a) + 0.25;
		cout<<fixed<<setprecision(2)<<"Case "<<i+1<<": "<<ans<<endl;
	}
}
