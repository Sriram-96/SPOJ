#include<bits/stdc++.h>
using namespace std;

string intToString(long long int num)
{
	ostringstream str1; 
    str1 << num; 
    string geek = str1.str();
    return geek;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string a,b,ans;
		cin>>a>>b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		long long int x,y,z;
		x=stoi(a);
		y=stoi(b);
		z=x+y;
		ans=intToString(z);
		reverse(ans.begin(),ans.end()); 
		cout<<stoi(ans)<<endl;
	}
}
