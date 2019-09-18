#include<bits/stdc++.h>
using namespace std;

int stringtoint(string s)
{
	stringstream geek(s);
	int x = 0; 
    geek >> x; 
    return x;
}

string inttostring(int i)
{
	string out_string;
	stringstream ss;
	ss << i;
	out_string = ss.str();
	return out_string;
}

int mod_big(string num, int a) 
{ 
    int res = 0;
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 

string gcd(string a, string b)
{
	if (stringtoint(b)==0)
		return a;
	else
	{
		int mod_value=mod_big(a,stringtoint(b));
		return gcd(b,inttostring(mod_value));	
	}
}

int main()
{
	int t;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<gcd(b,a)<<endl;
	}
}
