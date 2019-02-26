#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	double pow = log2(n);
	if(n<2)
		cout<<"TAK";
	else if(floor(pow)==ceil(pow))
		cout<<"TAK";
	else
		cout<<"NIE";
}
