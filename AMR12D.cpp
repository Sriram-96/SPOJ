#include<iostream>
#include<iomanip>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
using namespace std;
#define all(a) a.begin(),a.end()
#define pb push_back
#define sz(a) sizeof(a)
#define sp(a) fixed<<setprecision(a)
#define mp make_pair
#define fir first
#define sec second
#define debug(a) cout<<"#"<<a<<endl
#define F0r(i,n) for(int i=0;i<n;i++)
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Ford(i,a,b) for(int i=a;i>=b;i--)
#define mem(a,val) memset(a,val,sz(a))
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll ,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
const int mod = 1e9+7;

void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,i,l;
	string s,temp;
	bool found1;
	cin>>t;
	while(t--)
	{
		cin>>s;
		found1=true;
		for(l=1;l<=s.length();l++)
		{
			for(i=0;i<=s.length()-l;i++)
			{
				temp=s.substr(i,l);
				reverseStr(temp);
				if(s.find(temp)==std::string::npos && found1)
				{
					found1=false;
					cout<<"NO"<<endl;
					break;
				}
			}
		}
		if(found1)
			cout<<"YES"<<endl;
	}
	return 0;
}

