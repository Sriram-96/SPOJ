#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,g,x,y;
	while(1==1)
	{
		cin>>g>>b;
		if(g==-1 && b==-1)
			return 0;
		else if(g==0 && b==0)
			cout<<0<<endl;
		else if(g==b || g-b==1 || b-g==1)
			cout<<1<<endl;
		else if(g==0)
			cout<<b<<endl;
		else if(b==0)
			cout<<g<<endl;
		else
		{
			x=max(g,b);
			y=min(g,b);
			if(x%(y+1)==0)
				cout<<x/(y+1)<<endl;
			else
				cout<<1+(x/(y+1))<<endl;
		}
	}
}
