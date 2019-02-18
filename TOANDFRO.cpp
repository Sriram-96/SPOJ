#include<bits/stdc++.h>
using namespace std;

string reverseStr(string str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    return str;
} 

int main()
{
	int n,i;
	while(1==1)
	{
		cin>>n;
		if(n==0)
			return 0;
		string s;
		cin>>s;
		int l=s.length()/n;
		string mat[l];
		for(i=0;i<l;i++)
			if(i%2==0)
				mat[i]=s.substr(n*i,n);
			else
				mat[i]=reverseStr(s.substr(n*i,n));
		for(i=0;i<n;i++)
			for(int j=0;j<l;j++)
				cout<<mat[j][i];
		cout<<endl;
	}
}
