#include<bits/stdc++.h>
using namespace std;
int main()
{
//	setprecision(3);
	float a[1000],ans[1000],max=0.00;
	int n=0,i=0;
	while(1==1)
	{
		cin>>a[n];
		if(a[n]==0.00)
			break;
		if(a[n]>max)
			max=a[n];
		n++;
	}
	ans[0]=0.50;
	while(ans[i]<=max)
	{
		i++;
		ans[i]=(float)(1.00/(i+2))+(float)ans[i-1];
//		cout<<i<<"*"<<ans[i];
	}
	for(int j=0;j<n;j++)
	{
		if(a[j]<=0.50)
		{
			cout<<1<<" card(s)"<<endl;
			continue;
		}
		for(int k=0;k<=i;k++)
		{
			if(ans[k]>a[j])
			{
				cout<<k+1<<" card(s)"<<endl;
				break;	
			}
		}
	}
}
