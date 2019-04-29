#include<bits/stdc++.h>
using namespace std;

long long int ncr(long long int n, long long int r)
{
	long long int i,j,prod=1;
	for(i=n,j=1;i>=max(r,n-r)+1;i--,j++)
	{
		prod=((prod*i)/j);
	}
	return prod;
}

int main()
{
	int t,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		printf("%lld\n",ncr(n-1,n-k));
	}
}
