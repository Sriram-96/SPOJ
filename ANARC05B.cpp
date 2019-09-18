#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j;
	while(1==1)
	{
		cin>>m;
		int a[m+1];
		if(m==0)
			return 0;
		for(i=0;i<m;i++)
			cin>>a[i];
		cin>>n;
		int b[n+1];
		for(i=0;i<n;i++)
			cin>>b[i];
		i=0;
		j=0;
		a[m]=INT_MAX;
		b[n]=INT_MAX;
		int sum1=0,sum2=0,ans=0;
		while(i<m+1 && j<n+1)
		{
			if(a[i]==b[j])
			{
				ans+=max(sum1,sum2);
				ans+=a[i];
				sum1=0;
				sum2=0;
				i++;
				j++;
			}
			else if(a[i]>b[j])
			{
				sum2+=b[j];
				j++;
			}
			else
			{
				sum1+=a[i];
				i++;
			}
		}
		cout<<ans-INT_MAX<<endl;
	}
}
