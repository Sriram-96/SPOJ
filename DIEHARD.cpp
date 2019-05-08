#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,h,a,ans;
	cin>>t;
	while(t--)
	{
		cin>>h>>a;
		ans=0;
		while(true)
		{
			if(ans%2==0)
			{
				h+=3;
				a+=2;
			}
			else if(h<=5)
				break;
//			else if(h<=20)
//			{
//				if(a<=10)
//					break;
//				else
//				{
//					h-=5;
//					a-=10;
//				}
//			}
//			else
//			{
//				h-=20;
//				a+=5;
//			}
			else if(h>5&&a>10)
			{
				h-=5;
				a-=10;
			}
			else if(h>20&&a<=10)
			{
				h-=20;
				a+=5;
			}
			else
				break;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

