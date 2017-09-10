#include<bits/stdc++.h>
using namespace std;
int  parent[100];
//
typedef pair<int,int> ipair;
int finde(int i)
{
	if(i==parent[i])
		return parent[i];
	else
		return finde(parent[i]);
}
int unione(int i,int j)
{
	int u=finde(i);
	int v=finde(j);
	parent[u]=parent[v];
}
int main()
{
	int n,m;
	cout<<"enter the number of nodes and the number of edges\n";
	cin>>n>>m;
	vector< pair<int, ipair> > edges;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>w>>u>>v;
		edges.push_back(make_pair(w,make_pair(u,v)));
	}
	stable_sort(edges.begin(),edges.end());
	for(int i=0;i<n;i++)
	{
		parent[i]=i;
	}
	int wt=0;
	vector<pair<int,pair<int,int> > >::iterator it;
	for(it=edges.begin();it!=edges.end();it++)
	{
		int u=it->second.first;
		int v=it->second.second;
		if(finde(u)!=finde(v))
		{
			cout<<u<<"--"<<v<<"\n";
			wt=wt+it->first;
            unione(u,v);

		}
	}
	cout<<wt<<"\n";

}
