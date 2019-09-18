#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	long long int n,i,ans,curr;
	cin>>n;
	if(n==1)
	{
		cin>>curr;
		cout<<curr;
		return 0;
	}
	for(i=0;i<n;i++)
	{
		cin>>curr;
		if(i==0)
			ans=curr;
		else
			ans=ans^curr;
	}
	cout<<ans;
}
