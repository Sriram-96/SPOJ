#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int a[m],b[n],i,j;
		for(i=0;i<m;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+m);
		sort(b,b+n);
		for(i=0,j=0;;)
		{
			if(i==m)
			{
				cout<<"MechaGodzilla"<<endl;
				break;
			}
			else if(j==n)
			{
				cout<<"Godzilla"<<endl;
				break;
			}
			else if(a[i]<b[j])
				i++;
			else if(b[j]<a[i])
				j++;
			else
				j++;
		}
	}
}
