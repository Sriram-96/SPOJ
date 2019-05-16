#include<bits/stdc++.h>
using namespace std;

int tree[INT_MAX];

void build(int A[50005], int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(A, 2*node, start, mid);
        build(A, 2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
//    if(l <= start and end <= r)
//    {
//        return tree[node];
//    }
	if(start == end)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(max(p1,p2),p1+p2);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m,n,i,x,y;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++)
		cin>>a[i];
	build(a,1,1,n);
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		cout<<query(1,1,n,x,y)<<endl<<flush;
	}
	return 0;
}

