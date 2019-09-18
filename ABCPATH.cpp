#include<bits/stdc++.h>
using namespace std;

void abc_bfs(int m,int n,char a[50][50],int no)
{
	int i,j,ans=0,x,y;
	list<pair<pair<int,int>,int> > queue;
	pair<pair<int,int>,int> temp;
	bool visited[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			visited[i][j]=false;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]=='A')
			{
				queue.push_back(make_pair(make_pair(i,j),1));
				visited[i][j]=true;
			}
	if(queue.empty())
	{
		cout<<"Case "<<no<<": "<<0<<endl;
		return;
	}
	ans++;
	while(!queue.empty())
	{
		temp=queue.front();
		i=temp.first.first;
		j=temp.first.second;
		queue.pop_front();
		x=i,y=j+1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i+1,y=j;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i,y=j-1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i-1,y=j;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i+1,y=j+1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i-1,y=j-1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i+1,y=j-1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		x=i-1,y=j+1;
		if(x>=0 && y>=0 && x<m && y<n && a[x][y]=='A'+temp.second && !visited[x][y])
		{
			queue.push_back(make_pair(make_pair(x,y),temp.second+1));
			visited[x][y]=true;
		}
		if(temp.second>ans)
			ans=temp.second;
	}
	cout<<"Case "<<no<<": "<<ans<<endl;
	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m,n,i,j,no=1;
	string temp;
	while(true)
	{
		cin>>m>>n;
		char a[50][50];
		if(m==0 && n==0)
			return 0;
		for(i=0;i<m;i++)
		{
			cin>>temp;
			for(j=0;j<n;j++)
				a[i][j]=temp[j];
		}
		abc_bfs(m,n,a,no);
		no++;
	}
	return 0;
}

