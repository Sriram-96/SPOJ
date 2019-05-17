#include<bits/stdc++.h>
using namespace std;

int max_left_sum[200005], max_right_sum[200005], max_sum[200005], total_sum[200005];

void build(int A[50005], int node, int start, int end)
{
    if(start == end)
    {
        max_left_sum[node] = A[start];
        max_right_sum[node] = A[start];
        max_sum[node] = A[start];
        total_sum[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(A, 2*node, start, mid);
        build(A, 2*node+1, mid+1, end);
        total_sum[node] = total_sum[2*node] + total_sum[2*node+1];
        if(max_left_sum[2*node]==total_sum[2*node] && max_left_sum[2*node+1]>0)
        {
        	max_left_sum[node] = max_left_sum[2*node]+max_left_sum[2*node+1];
		}
		else
			max_left_sum[node] = max_left_sum[2*node];
		if(max_right_sum[2*node+1]==total_sum[2*node+1] && max_right_sum[2*node]>0)
        {
        	max_right_sum[node] = max_right_sum[2*node]+max_right_sum[2*node+1];
		}
		else
			max_right_sum[node] = max_right_sum[2*node+1];
		max_sum[node] = max(max(max_left_sum[node],max_right_sum[node]), total_sum[node]);
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return INT_MIN;
    }
//    if(l <= start and end <= r)
//    {
//        return tree[node];
//    }
	if(start == end)
    {
        return max_sum[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(max(p1,p2),max_right_sum[2*node]+max_left_sum[2*node+1]);
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

