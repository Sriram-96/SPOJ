# include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,element;
	cin>>n>>k;
	int a[n];
	unordered_set<int> hashmap;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		hashmap.insert(a[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(hashmap.count(a[i]-k) == 1)
		{
			count++;
		}
		if(hashmap.count(a[i]+k) == 1)
		{
			count++;
		}
	}
	cout<<count/2;
}
