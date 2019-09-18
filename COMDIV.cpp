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

int gcd(int a,int b)
{
	if (b == 0) 
        return a;
    return gcd(b, a % b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,a,b,i,ans,hcf;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		ans=0;
		hcf=gcd(a,b);
		for(i=1;i<=hcf;i++)
			if(hcf%i==0)
				ans++;
		printf("%d\n",ans);
	}
	return 0;
}

