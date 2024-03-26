#include<bits/stdc++.h>

using namespace std;
///topological sorting O(v + E)
///if loop exist, answer doesn't exist
const int N = 1000;
vector< int > g[N];
bool vis[N];
int indeg[N];

int main()
{
    int n,m;/// n task;m condition
    cin>>n>>m;
    while(m--)
    {
        int u, v;
        cin>>u>>v;///you have to do task u, before v
        g[u].push_back(v);
        ++indeg[v];
    }
    vector< int > z;
    for( int i =1 ; i <= n; i++)
    {
        if(indeg[i] == 0)
        {
            z.push_back(i);///we can do the current task which has indeg 0, because this means it's not dependent on any other task
            vis[i] = true;
        }
    }
    vector< int > ans;
    while(ans.size() < n)
    {
        if(z.empty())
        {
            cout<<"IMPOSSIBLE\n";
            return 0;
        }
        int cur = z.back();
        z.pop_back();
        ans.push_back(cur);
        for(auto v : g[cur])
        {
            --indeg[v];
            if(!vis[v] and indeg[v] == 0)
            {
                z.push_back(v);
                vis[v] = true;
            }
        }
    }
    for(auto x : ans)cout<<x<<' ';
    cout<<endl;
    return 0;
}
