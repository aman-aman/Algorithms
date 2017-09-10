#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int> > >adj(100);
typedef pair<int,int> p;
//aman kumar jha
void prim(int n)
{
    priority_queue<p,vector <p>,greater<p> >pq;
    int src = 0;
    vector<int>key(n, INT_MAX);
    vector<int>parent(n);
    vector<int>mst(n, -1);
    pq.push(make_pair(0, src));
    key[src]=0;
    while (!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        mst[u]=1;
        for (list<p>::iterator i=adj[u].begin();i!= adj[u].end();++i)
        {
            int v=(*i).first;
            int weight=(*i).second;
            if (mst[v]==-1&&key[v]>weight)
            {
                key[v]=weight;
                pq.push(make_pair(key[v], v));
                parent[v]=u;
                //cout<<"aman\n";
            }
        }
    }
    for (int i=1;i<n;++i)
        printf("%d->%d\n", parent[i], i);
}

int main()
{
    int n,m,u,v,w;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    prim(n);
}
