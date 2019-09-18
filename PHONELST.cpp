#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,n;
	string s,temp;
	bool isYes;
	map<string,int> hashmap;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string input[n];
		hashmap.clear();
		isYes=true;
		for(i=0;i<n;i++)
			cin>>input[i];
		sort(input,input+n);
		for(i=0;i<n;i++)
		{
			s=input[i];
			for(j=0;j<s.length();j++)
			{
				temp=s.substr(0,j+1);
				if (hashmap.find(temp)!=hashmap.end() && isYes)
				{
					cout<<"NO"<<endl;
					isYes=false;
				}
			}
			hashmap[s]=1;
		}
		if(isYes)
			cout<<"YES"<<endl;
	}
}
