#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
/*
	Given an array we need to perform two different task on it.
	1. Update: It implies that update ith element by y ie(A[x]=A[x]+y;)
	2. Query:   It implies perform a certain query on some given range [l,r]
				Here we are going to find the sum of all element in [l,r] inclusive
				ie(sum[l,r]=(A[l]+A[l+1]+.........A[r]))




*/
int tree[24]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int a[7];

void buildtree(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=a[start];
	}
	else
	{
		int mid=(start+end)/2;
		buildtree(2*node,start,mid);
		buildtree(2*node+1,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
void update(int node,int start,int end,int idx,int val)
{
	if(start==end)
	{
		a[idx]=a[idx]+val;
		tree[node]=tree[node]+val;
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=idx&&idx<=mid)
		{
			update(2*node,start,mid,idx,val);
		}
		else
		{
			update(2*node+1,mid+1,end,idx,val);
		}
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
int query(int node,int start,int end,int l,int r)
{
	if(r<start||end<l)
		return 0;
	if(l<=start&&end<=r)
		return tree[node];

	int mid=(start+end)/2;
	int p1=query(2*node,start,mid,l,r);
	int p2=query(2*node+1,mid+1,end,l,r);
	return (p1+p2);
}
int main()
{

	a[1]=1;
	a[2]=3;
	a[3]=5;
	a[4]=7;
	a[5]=9;
	a[6]=11;
	buildtree(1,1,6);
	printf("Sum: %d\n",query(1,1,6,1,3));
	update(1,1,6,4,3);
	printf("Sum: %d\n",query(1,1,6,2,5));

}
