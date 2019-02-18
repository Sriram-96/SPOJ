#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int last_digit[10][7]={{0,0,0,0},{1,1,1,1},{1,2,4,8,6},{1,3,9,7},{1,4,6,4,6},{1,5,5,5,5},{1,6,6,6,6},{1,7,9,3},{1,8,4,2,6},{1,9,1,9}};
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		a=a%10;
		switch(a)
		{
			case 2:
			case 4:
			case 5:
			case 6:
			case 8:
					if(b==0)
						cout<<last_digit[a][0];
					else
						cout<<last_digit[a][(((b-1)%4)+1)];
					break;
			default:
					cout<<last_digit[a][(b%4)];
		}
		cout<<endl;
	}
}
