#include<bits/stdc++.h>
using namespace std;
/*
  aman kumar jha
  This program has not implemented the Lazy Propagation
*/
void build(int node,int start,int end,int a[],int tree[])
{
	if(start==end)
	{
		tree[node]=a[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid,a,tree);
		build(2*node+1,mid+1,end,a,tree);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}
void update(int node,int start,int end,int idx,int val,int a[],int tree[])
{
    if(start==end)
	{
		a[idx]=val;
		tree[node]=val;
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=idx&&idx<=mid)
		{
			update(2*node,start,mid,idx,val,a,tree);
		}
		else
		{
			update(2*node+1,mid+1,end,idx,val,a,tree);
		}
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}
int query(int node,int start,int end,int l,int r,int a[],int tree[])
{
    if(start>r||end<l)
		return INT_MAX;
	if(start>=l&&end<=r)
		return tree[node];

	int mid=(start+end)/2;
	int p1=query(2*node,start,mid,l,r,a,tree);
	int p2=query(2*node+1,mid+1,end,l,r,a,tree);
	return min(p1,p2);
}
int main()
{
	int a[100001],tree[400005];
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	build(1,1,n,a,tree);
	while(q--)
	{
		int l,r,idx,val;
		char ch;
		cin>>ch;
		if(ch=='q')
		{
			cin>>l>>r;
			//find minimum in [l,r]
			printf("%d\n",query(1,1,n,l,r,a,tree));
		}
		else
		{
			cin>>idx>>val;
			//Update a[idx]=val
			update(1,1,n,idx,val,a,tree);
		}
	}
}
