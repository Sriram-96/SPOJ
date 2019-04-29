#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	double a,b,c,d,s,ans;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<fixed<<setprecision(2)<<ans<<endl;
	}
}
