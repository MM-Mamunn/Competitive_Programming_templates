#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+9;
bool vis[N];

void dfs(int parent , vector<int> graph[])
{
    vis[parent]=true;
    cout<<parent<<endl;
    for(auto  e : graph[parent])
    {
        if(vis[e]==false)
            dfs(e,graph);
    }
}

int main()
{
    memset(vis,0,sizeof(vis));
    int vertice,edge,x,y,parent;
    cin>>vertice>>edge>>parent;
    vector<int> graph[vertice+2];
    for(int i =1;i<=edge;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        ///if undirected
        graph[y].push_back(x);
    }
    dfs(parent,graph);
}
