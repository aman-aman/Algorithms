#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s;
	cout<<"Enter the number of vertex and the edges is graph\n";
	cin>>n>>m;
	vector<list<pair<int,int> > > adj(m);
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		adj[u].push_back(make_pair(v,w));
		adj[v].push_back(make_pair(u,w));
	}
	cout<<"enter the starting vertex\n";
	cin>>s;


	//diijkstra
	typedef pair<int,int> ipair;
	vector<int>dist(n,INT_MAX);
	dist[s]=0;

	priority_queue<ipair,vector<ipair>,greater<ipair> > pq;
	pq.push(make_pair(s,dist[s]));
	while(!pq.empty())
	{
		int u=pq.top().first;//to get the vertex
		pq.pop();
		list<pair<int,int> >::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();it++)
		{
			int v=(*it).first;
			int w=(*it).second;
			if(dist[v]>(dist[u]+w))
			{
				dist[v]=(dist[u]+w);
				pq.push(make_pair(v,dist[v]));
			}

		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<": "<<dist[i]<<"\n";
	}
}
