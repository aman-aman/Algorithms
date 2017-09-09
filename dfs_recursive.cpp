#include<bits/stdc++.h>
using namespace std;
vector<list<int> >adj(100);
vector<int> visited(100,-1);
//aman kumar jha
//recursive approach for dfs
void dfs(int s,int n)
{
    visited[s]=1;
    cout<<"\n"<<s;
        for (list<int>::iterator i=adj[s].begin();i!=adj[s].end();++i)
            if (visited[*i]==-1)
                dfs(*i,n);
}
int main()
{
    int n,m,u,v,start;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        //for undirected graph
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>start;
    dfs(start,n);
}
