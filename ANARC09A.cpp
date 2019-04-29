#include<bits/stdc++.h>
using namespace std;
int main()
{
	int curr,count,i,no=0;
	string s;
	while(1==1)
	{
		no++;
		cin>>s;
		if(s[0]=='-')
			return 0;
		curr=0;
		count=0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='{')
				curr++;
			else
			{
				if(curr>0)
					curr--;
				else
				{
					count++;
					curr++;
				}
			}
		}
		count = count + (curr/2);
		cout<<no<<". "<<count<<endl;
	}
}
