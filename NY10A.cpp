#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,i;
	string s,temp;
	unordered_map<string, int> ans;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cin>>s;
		ans["TTT"] = 0;
		ans["TTH"] = 0;
		ans["THT"] = 0;
		ans["THH"] = 0;
		ans["HTT"] = 0;
		ans["HTH"] = 0;
		ans["HHT"] = 0;
		ans["HHH"] = 0;
		for(i=0;i<38;i++)
		{
			temp = s.substr(i,3);
			ans[temp] = ans[temp]+1;
		}
		cout<<x<<" "<<ans["TTT"]<<" "<<ans["TTH"]<<" "<<ans["THT"]<<" "<<ans["THH"]<<" "<<ans["HTT"]<<" "<<ans["HTH"]<<" "<<ans["HHT"]<<" "<<ans["HHH"]<<endl;
	}
}
