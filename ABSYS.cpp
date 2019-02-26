#include<bits/stdc++.h>
using namespace std;

int StringToInt (string s)
{
	stringstream geek(s);
    int x = 0;
    geek >> x;
    return x;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c,plus,equal;
		cin>>a>>plus>>b>>equal>>c;
		if(a.find('m') != std::string::npos)
			cout<<StringToInt(c)-StringToInt(b)<<" + "<<b<<" = "<<c<<endl;
		else if(b.find('m') != std::string::npos)
			cout<<a<<" + "<<StringToInt(c)-StringToInt(a)<<" = "<<c<<endl;
		else
			cout<<a<<" + "<<b<<" = "<<StringToInt(a)+StringToInt(b)<<endl;
	}
}
