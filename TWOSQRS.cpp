#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,n;
	cin>>t;
	unordered_map<long long int, long long int> hashmap;
	for(i=0;i<=1000000;i++)
	{
		hashmap[(i*i)]=1;
	}
	while(t--)
	{
		cin>>n;
		for(i=0;i<=floor(sqrt(n));i++)
		{
			if(hashmap.find(n-(i*i)) != hashmap.end())
			{
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(i==floor(sqrt(n))+1)
			cout<<"No"<<endl;
	}
}
