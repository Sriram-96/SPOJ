#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,k,i,j,ans;
	cin>>t;
	while(t--)
	{
		ans=1000000000;
		cin>>n>>k;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		if(k==1)
		{
			cout<<0<<endl;
			continue;
		}
		sort(a,a+n);
		i=0;
		j=k-1;
		while(j<n)
		{
			if(a[j]-a[i]<ans)
				ans=a[j]-a[i];
			i++;
			j++;
		}
		cout<<ans<<endl;
	}
}
