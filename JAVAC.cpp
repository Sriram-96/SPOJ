#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	list<int> temp;
	list<int>::iterator it;
	int i,n,lower_count,count_legal;
	while(cin>>s)
	{
		n=s.length();
		lower_count=0;
		count_legal=0;
		temp.clear();
		for(i=0;i<n;i++)
			if(s[i]>='a' && s[i]<='z')
				lower_count++;
		for(i=0;i<n;i++)
			if(not ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]=='_'))
				break;
		if(i<n)
			cout<<"Error!"<<endl;
		else if(s[n-1]=='_')
			cout<<"Error!"<<endl;
		else if(s[0]>='A' && s[0]<='Z')
			cout<<"Error!"<<endl;
		else if(s.find("__") != std::string::npos)
			cout<<"Error!"<<endl;
		else if(s.find('_') != std::string::npos)
		{
			for(i=0;i<n;i++)
			{
				if(not (s[i]=='_' || (s[i]>='a' && s[i]<='z')))
				{
					break;
				}
			}
			if(i==n)
			{
				for(i=1;i<n-1;i++)
				{
					if(s[i]=='_')
						s[i+1]=s[i+1]+'A'-'a';
				}
				s.erase(std::remove(s.begin(), s.end(), '_'), s.end());
				cout<<s<<endl;
			}
			else
			{
				cout<<"Error!"<<endl;
			}
		}
		else if(lower_count==n)
		{
			cout<<s<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(s[i]>='A' && s[i]<='Z')
				{
					s[i]=s[i]-'A'+'a';
					temp.push_back(i);
//					s.insert(i,1,'_');
				}
			}
			for(it=temp.begin(),i=0; it!=temp.end(); ++it,i++)
			{
				s.insert((*it)+i,1,'_');
			}
			cout<<s<<endl;
		}
	}
}
