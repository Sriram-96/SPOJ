#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,ans=0;
		cin>>n;
		for(i=0;i<n;i++)
			ans = ans + (3*(i+1));
		ans = ans - n;
		cout<<ans%1000007<<endl;
	}
}
