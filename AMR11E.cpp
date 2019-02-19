#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
}

bool checkLucky(int n)
{
	int count=0;
	for (int i=2; i<=sqrt(n); i++) 
    {
        if (n%i == 0) 
        {
            if (n/i == i && isPrime(i)) 
                count++;
            else
            {
				if(isPrime(i))
					count++;
				if(isPrime(n/i))
					count++;
			}
        }
    }
    if(count>=3)
    	return true;
    else
    	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n],i,max=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	int ans[max],count=30;
	i=0;
	while(i<max)
	{
		if(checkLucky(count))
			ans[i++]=count;
		count++;
	}
//	for(i=0;i<max;i++)
//		cout<<ans[i]<<"*";
//	cout<<endl;
	for(i=0;i<n;i++)
		cout<<ans[a[i]-1]<<endl;
}
