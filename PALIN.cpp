#include<bits/stdc++.h>
#include <string> 
using namespace std;

string IntToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int StringToInt (string s)
{
	stringstream geek(s);
    int x = 0;
    geek >> x;
    return x;
}

int reverse (int n)
{
	int reversedNumber=0,remainder;
	while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

string numFromAtoB(string s,int a,int b)
{
	string sub = s.substr(a,b-a+1);
	return sub;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,i;
		string s;
		cin>>s;
		if(s.length()==1)
		{
			cout<<a<<endl;
			continue;
		}
		//add 1 to s
		int n = s.length();
		if(n%2==0)
		{
			if(reverse(numFromAtoB(a,0,n/2-1))>=numFromAtoB(a,n/2,n-1))
			{
				for(i=0;i<n/2;i++)
					cout<<s[i];
				for(i=n/2-1;i>=0;i--)
					cout<<s[i];
				cout<<endl;
			}
			else
			{
				int temp = numFromAtoB(a,0,n/2-1);
				temp++;
				cout<<temp<<reverse(temp)<<endl;
			}
		}
		else
		{
			if(reverse(numFromAtoB(s,0,n/2-1))>=numFromAtoB(s,n/2+1,n-1))
			{
				for(i=0;i<n/2;i++)
					cout<<s[i];
				cout<<s[n/2];
				for(i=n/2-1;i>=0;i--)
					cout<<s[i];
				cout<<endl;
			}
			else
			{
				int temp = numFromAtoB(s,0,n/2);
				temp++;
				cout<<temp<<reverse(numFromAtoB(temp,0,(IntToString(temp).length())-2))<<endl;
			}
		}
	}
}
