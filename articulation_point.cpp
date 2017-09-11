#include<bits/stdc++.h>
using namespace std;
/*
des[] is used to store the time at which a node is discoverd first
low[] is used to store the smallest time it can be reached
time -- it is used to store the current time
child -- it is used to count the number of child of a node
parent[u]=v implies that parent of u is v
*/
vector<list<long long> >adj(100);
long long t=0;
vector<long long> visited(100,-1);
vector<long long> ap(100,-1);
vector<long long> parent(100,0);
vector<long long> desc(100);
vector<long long> low(100);
long long arp(long long u,long long n)
{
    long long child=0;
    desc[u]=low[u]=++t;
    visited[u]=1;

    for(list<long long>::iterator it=adj[u].begin();it!=adj[u].end();it++)
    {
        if(visited[*it]==-1)
        {
            ++child;
            parent[*it]=u;
            arp(*it,n);
            low[u]=min(low[u],desc[*it]);
            if(child>1&&parent[u]==0)
                ap[u]=1;
            if(parent[u]==0&&low[*it]>=desc[u])
                ap[u]=1;
        }
        else if(*it!=parent[u])
            low[u]=min(low[u],desc[*it]);
    }

}
void apt(long long n)
{
    for(long long i=0;i<n;i++)
    {
        if(visited[i]==-1)
        {
            arp(i,n);
        }
    }
}
int main()
{
    long long n,m,u,v;
    cin>>n>>m;
    for(long long i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    apt(n);
    for(long long i=0;i<n;i++)
    {
        //cout<<"aman\n";
        if (ap[i]==1)
        {
            cout<<i<<" ";
        }
    }
}
