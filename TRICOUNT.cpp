#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,max=0;
	cin>>t;
	int a[t];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];	
	}
	int ans[max],l=5;
	ans[0]=1;
	ans[1]=5;
	for(i=2;i<max;i++)
	{
		ans[i] = ans[i-1] + l + ((i+1)*i/2);
		l+=2;
	}
	for(i=0;i<t;i++)
	{
		cout<<ans[a[i]-1]<<endl;
	}
}
