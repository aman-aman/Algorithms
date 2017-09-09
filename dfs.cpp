#include<bits/stdc++.h>
using namespace std;
vector<list<int> >adj(100);
//aman kumar jha
void dfs(int s,int n)
{
    vector<int> visited(n,-1 );
    stack<int> st;
    st.push(s);
    while (!st.empty())
    {
        s = st.top();
        st.pop();
        if (visited[s]==-1)
        {
            cout <<s<<" ";
            visited[s]=1;
        }
        for (list<int>::iterator i=adj[s].begin(); i != adj[s].end(); ++i)
            if (visited[*i]==-1)
                st.push(*i);
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
    dfs(start,n);
}
