#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count1=0,count2=0,count3=0,i,ans=0;
	cin>>n;
	string s;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if(s.compare("1/4")==0)
			count3++;
		else if(s.compare("1/2")==0)
			count2++;
		else
			count1++;
	}
	ans+=(count2/2);
	if(count1>=count3)
	{
		ans+=count1;
		ans+=(count2%2);
	}
	else
	{
		ans+=count1;
		ans+=((count3-count1)/4);
		if((count3-count1)%4==3)
		{
			ans++;
			ans+=(count2%2);
		}
		else if((count3-count1)%4==0)
			ans+=(count2%2);
		else
			ans++;
	}
	cout<<ans+1;
}
