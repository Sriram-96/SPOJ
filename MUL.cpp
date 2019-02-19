# include<bits/stdc++.h>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int stringToInt( string s )
{
   int result = 0;
   for ( int i = 0; i < s.size(); i++ )
   {
      int digit = s[i] - '0';
      result = 10 * result + digit;
   }
   return result;
}

void single_multi(string a, string b)
{
	string ans;
	int l = a.length(),i,unit=0,ten=0,no;
	for(i=0;i<l;i++)
	{
		no = stringToInt(b) * (int)a[l-1-i];
		unit = ten+no%10;
		ten = no/10;
		ans.insert(0,(string)unit);
	}
	ans.insert(0,(string)ten);
	return ans;
}

void multi(string a,string b)
{
	int m=a.length(),n=b.length(),i,j,max_length=0;
	string rows[n];
	for(i=0;i<n;i++)
	{
		string zeros, row;
		for(j=0;j<i;j++)
			zeros.append('0');
		row.append(single_multi(a,b[i]));
		row.append(zeros);
		rows[i] = row;
		if(row.length()>max_length)
			max_length=row.length();
	}
	int unit=0,ten=0,no=0;
	string ans;
	for(i=0;i<max_length;i++)
	{
		no=0;
		for(j=0;j<n;j++)
		{
			no+=stringToInt(rows[j][rows[j].length()-1-i]);
		}
		unit = ten+no%10;
		ten = no/10;
		ans.insert(0,(string)unit);
	}
	ans.insert(0,(string)ten);
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		cout<<multi(a,b);
	}
}
