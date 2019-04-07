#include<bits/stdc++.h>
using namespace std;

long long int sumdigsq(long long int x)
{
	long long int ans=0;
	while(x>0)
	{
		ans = ans + ((x%10)*(x%10));
		x=x/10;
	}
	return ans;
}

int main()
{
	long long int n,count=0,result;
	map<long long int, bool> history; 
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	result=n;
	history.insert(pair<long long int, bool>(result, true));
	while(1==1)
	{
		result=sumdigsq(result);
		count++;
		if(result==1)
		{
			cout<<count;
			return 0;
		}
		else if(history.find(result) != history.end())
		{
			cout<<-1;
			return 0;
		}
		history.insert(pair<long long int, bool>(result, true));
	}
}
