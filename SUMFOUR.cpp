#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k,l,count=0;
	cin>>n;
	long long int a[n],b[n],c[n],d[n],temp[n*n],temp1[n*n];
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i]>>d[i];
//	sort(c,c+n);
//	sort(d,d+n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			k=0,l=n-1;
//			while(k<n && l>=0)
//			{
//				if(a[i]+b[j]+c[k]+d[l]==0)
//				{
//					count++;
//					if(k+1<n && c[k]==c[k+1] && l-1>=0 && d[l-1]==d[l])
//					{
//						k+=2;
//						l-=2;
//						count+=3;
//					}
//					else if(k+1<n && c[k]==c[k+1])
//						k++;
//					else if(l-1>=0 && d[l-1]==d[l])
//						l--;
//					else
//					{
//						k++;
//						l--;
//					}
//				}
//				else if(a[i]+b[j]+c[k]+d[l]>0)
//					l--;
//				else
//					k++;
//			}
//		}
//	}
	set<pair <long long int, int>> hashmap;
	k=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			temp[k]=a[i]+b[j];
			pair <long long int, int> tem;
			tem.first=c[i]+d[j];
			if(tem.second>0)
				tem.second++;
			else
				tem.second=0
			hashmap.insert(c[i]+d[j]);
			k++;
		}
	for(i=0;i<n*n;i++)
	{
		if(hashmap.count(-temp[i])>0)
		{
			count+=cc;
		}
	}
	cout<<count;	
}
