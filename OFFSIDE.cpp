#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j,min,count;
	while(1==1)
	{
		cin>>m>>n;
		int a[m],b[n];
		if(m==0 && n==0)
			return 0;
		for(i=0;i<m;i++)
			cin>>a[i];
		for(j=0;j<n;j++)
			cin>>b[j];
		min = a[0];
		for(i=0;i<m;i++)
			if(a[i]<min)
				min=a[i];
		count=0;
		for(j=0;j<n;j++)
		{
			if(b[j]<=min)
				count++;
		}
		if(count>=2)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
}
