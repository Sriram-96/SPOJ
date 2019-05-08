#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n,i,j,ans=0;
	cin>>n;
	long long int a[n],b[n],c[n],d[n];
	unordered_map<long long int,long long int> hashmap1;
	hashmap1.reserve(16000000);
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			hashmap1[a[i]+b[j]]++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(hashmap1.find(-c[i]-d[j]) != hashmap1.end())
				ans+=hashmap1[-c[i]-d[j]];
		}
	}
	cout<<ans;
	return 0;
}

