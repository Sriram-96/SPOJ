#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
    return true; 
} 

int stringtoint(string s)
{
	stringstream geek(s);
	int x = 0; 
    geek >> x; 
    return x;
}

string inttostring(int i)
{
	string out_string;
	stringstream ss;
	ss << i;
	out_string = ss.str();
	return out_string;
}

int bfs(int start,int end)
{
	int i,temp2;
	bool visited[10000]={false};
	string temp1;
	char j;
	pair<int,int> temp_front;
	list<pair<int,int>> queue;
	visited[start]=true;
	queue.push_back(make_pair(start,0));
	while(!queue.empty()) 
	{
		temp_front=queue.front();
		if(temp_front.first==end)
			return temp_front.second;
		queue.pop_front();
		for(j='1';j<='9';j++)
		{
			temp1=inttostring(temp_front.first);
			temp1[0]=j;
			temp2=stringtoint(temp1);
			if(!visited[temp2] && isPrime(temp2))
			{
				visited[temp2]=true;
				queue.push_back(make_pair(temp2,temp_front.second+1));
//				cout<<1<<"*"<<temp2<<endl;
			}
		}
		for(j='0';j<='9';j++)
		{
			temp1=inttostring(temp_front.first);
			temp1[1]=j;
			temp2=stringtoint(temp1);
			if(!visited[temp2] && isPrime(temp2))
			{
				visited[temp2]=true;
				queue.push_back(make_pair(temp2,temp_front.second+1));
//				cout<<2<<"*"<<temp2<<endl;
			}
		}
		for(j='0';j<='9';j++)
		{
			temp1=inttostring(temp_front.first);
			temp1[2]=j;
			temp2=stringtoint(temp1);
			if(!visited[temp2] && isPrime(temp2))
			{
				visited[temp2]=true;
				queue.push_back(make_pair(temp2,temp_front.second+1));
//				cout<<3<<"*"<<temp2<<endl;
			}
		}
		for(j='0';j<='9';j++)
		{
			temp1=inttostring(temp_front.first);
			temp1[3]=j;
			temp2=stringtoint(temp1);
			if(!visited[temp2] && isPrime(temp2))
			{
				visited[temp2]=true;
				queue.push_back(make_pair(temp2,temp_front.second+1));
//				cout<<4<<"*"<<temp2<<endl;
			}
		}
	}
	return -1;
}

int main()
{
	int t,start,end,ans;
	cin>>t;
	while(t--)
	{
		cin>>start>>end;
		ans=bfs(start,end);
		if(ans==-1)
			cout<<"Impossible"<<endl;
		else
			cout<<ans<<endl;
	}
}
