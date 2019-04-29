#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a,b,c,d,e,f,ans=0,k;
	cin>>n;
	int arr[n],arr1[n*n*n],arr2[n*n*n];
	unordered_map<int,int> hashmap1,hashmap2;
	unordered_map<int,int>::iterator it;
	for(i=0;i<n;i++)
		cin>>arr[i];
	k=0;
	for(a=0;a<n;a++)
	{
		for(b=0;b<n;b++)
		{
			for(c=0;c<n;c++)
			{
//				arr1[k++]=arr[a]*arr[b]+arr[c];
				hashmap1[arr[a]*arr[b]+arr[c]]++;
			}
		}
	}
	k=0;
	for(d=0;d<n;d++)
	{
		for(e=0;e<n;e++)
		{
			for(f=0;f<n;f++)
			{
				if(arr[d]!=0)
				{
//					arr2[k++]=arr[d]*(arr[e]+arr[f]);
					hashmap2[arr[d]*(arr[e]+arr[f])]++;
				}
				else
				{
//					arr2[k++]=30001;
					hashmap2[INT_MAX]++;
				}
			}
		}
	}
//	sort(arr1,arr1+(n*n*n));
//	sort(arr2,arr2+(n*n*n));
//	if(hashmap2[arr1[0]]>0)
//	{
//		ans+=(hashmap2[arr1[0]]*hashmap1[arr1[0]]);
//	}
//	for(i=1;i<n*n*n;i++)
//	{
//		if(arr1[i]==arr1[i-1])
//			continue;
//		if(hashmap2[arr1[i]]>0)
//		{
//			ans+=(hashmap2[arr1[i]]*hashmap1[arr1[i]]);
//		}
//	}
	for(it=hashmap1.begin();it!=hashmap1.end();it++)
	{
		if(hashmap2[it->first]>0)
			ans+=(hashmap2[it->first]*(it->second));
	}
	cout<<ans;
}
