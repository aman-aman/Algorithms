#include<bits/stdc++.h>
using namespace std;
vector<list<int> >adj(100);
void bfs(int s,int n)
{
    vector<int>visited(n,-1);
    visited[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        cout<<"\n"<<s;
        q.pop();
        for(list<int>::iterator i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(visited[*i]==-1)
            {
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
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
    bfs(start,n);
}

