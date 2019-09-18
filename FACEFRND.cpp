#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,temp,ans=0;
	cin>>n;
	map<int,int> hashmap1,hashmap2;
	map<int,int>::iterator it;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		hashmap1[temp]++;
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>temp;
			hashmap2[temp]++;
		}
	}
	for(it=hashmap2.begin();it!=hashmap2.end();it++)
	{
		if(hashmap1.find(it->first)==hashmap1.end())
			ans++;
	}
	cout<<ans;
}
