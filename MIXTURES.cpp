#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		long long int a[n],smoke[n],color[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			smoke[i]=0;
			color[i]=0;
		}
		if(n==1)
		{
			cout<<0<<endl;
			continue;
		}
		color[0]=a[0];
		color[1]=(a[0]+a[1])%100;
		smoke[0]=0;
		smoke[1]=a[0]*a[1];
		for(i=2;i<n;i++)
		{
			if((smoke[i-2]+(a[i]*a[i-1])+(color[i-2]*((a[i]+a[i-1])%100)))<(smoke[i-1]+(color[i-1]*a[i])))
				smoke[i]=(smoke[i-2]+(a[i]*a[i-1])+(color[i-2]*((a[i]+a[i-1])%100)));
			else
				smoke[i]=(smoke[i-1]+(color[i-1]*a[i]));
			color[i]=(a[i]+color[i-1])%100;
		}
		cout<<smoke[n-1]<<endl;
	}
	return 0;
}
