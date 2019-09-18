#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,b,repeat,lst_dgt_intt;
	string a;
	char lst_dgt;
	int pattern[10][4] = {{0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		lst_dgt = a.back();
		lst_dgt_intt = lst_dgt - '0';
		// cout<<"*"<<a;
		// cout<<"#"<<lst_dgt<<"@"<<lst_dgt_intt<<endl;
		repeat = b%4;
		if(b==0)
			cout<<1<<endl;
		else
			cout<<pattern[lst_dgt_intt][repeat]<<endl;
	}
}
