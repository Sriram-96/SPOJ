#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		n=x;
		int height=1;
		while(n-height>0)
		{
			n=n-height;
			height++;
		}
		if(height%2==0)
			cout<<"TERM "<<x<<" IS "<<n<<"/"<<height+1-n<<endl;
		else
			cout<<"TERM "<<x<<" IS "<<height+1-n<<"/"<<n<<endl;
	}
}
