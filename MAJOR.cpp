#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,x;
	unordered_map<int,int> hashmap;
	unordered_map<int,int>::iterator it;
	bool isYes;
	cin>>t;
	while(t--)
	{
		cin>>n;
		hashmap.clear();
		isYes=false;
		for(i=0;i<n;i++)
		{
			cin>>x;
			hashmap[x]++;
		}
		for(it=hashmap.begin();it!=hashmap.end();it++)
		{
			if(it->second > n/2)
			{
				cout<<"YES "<<it->first<<endl;
				isYes=true;
			}
		}
		if(!isYes)
			cout<<"NO"<<endl;
	}
	return 0;
}
