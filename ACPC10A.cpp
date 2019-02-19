#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	while(1==1)
	{
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			break;
		if(b-a==c-b)
			cout<<"AP "<<2*c-b<<endl;
		else
			cout<<"GP "<<c*c/b<<endl;
	}
}
