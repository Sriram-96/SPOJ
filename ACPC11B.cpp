#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j,m,n,dist;
	cin>>t;
	while(t--)
	{
		cin>>m;
		long long int a[m];
		for(i=0;i<m;i++)
			cin>>a[i];
		cin>>n;
		long long int b[n];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+m);
		sort(b,b+n);
		dist=INT_MAX;
		for(i=0,j=0;i<m&&j<n;)
		{
			if(abs(a[i]-b[j])<dist)
				dist=abs(a[i]-b[j]);
			if(a[i]<b[j])
				i++;
			else if(a[i]>b[j])
				j++;
			else
			{
				i++;j++;
			}
		}
		cout<<dist<<endl;
	}
}
