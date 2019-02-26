#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(1==1)
	{
		cin>>n;
		if(n==0)
			return 0;
		int a[n],i,curr=1;
		stack<int> main,temp;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=n-1;i>=0;i--)
			main.push(a[i]);
		while(1==1)
		{
			if(curr==n+1)
			{
				cout<<"yes"<<endl;
				break;
			}
			else if(!main.empty() && main.top()==curr)
			{
				main.pop();
				curr++;	
			}
			else if(!temp.empty() && temp.top()==curr)
			{
				temp.pop();
				curr++;	
			}
			else if(main.empty())
			{
				cout<<"no"<<endl;
				break;
			}
			else
			{
				temp.push(main.top());
				main.pop();
			}
		}
	}
}
