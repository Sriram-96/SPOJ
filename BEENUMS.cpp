#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,diff,count;
	while(1==1)
	{
		cin>>n;
		if(n==-1)
			return 0;
		else if(n==1)
			cout<<"Y"<<endl;
		else
		{
			n--;
			diff=6;
			count=0;
			while(n>0)
			{
				n=n-diff;
				diff=diff+6;
			}
			if(n==0)
				cout<<"Y"<<endl;
			else
				cout<<"N"<<endl;
		}
	}
}
