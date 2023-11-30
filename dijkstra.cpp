#include<bits/stdc++.h>
#include <numeric>
using namespace std;
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define forc(c,n) for(int i=c;i<n;i++)
#define PI (acos(-1.0))
#define pb push_back
#define vi vector<long long >
#define all(a) sort(a.begin(),a.end());
#define torad(x) ((x) * ((2*acos(0))/180.0))
#define todeg(x) ((x) * (180.0/(2*acos(0))))
#define el "\n"
#define yess cout<<"YES"<<el
#define noo cout<<"NO"<<el
#define ff first
#define ss second
#define mp make_pair
#define sz(x) (int)x.size()
#define mem(arr,x) memset(arr,x,sizeof arr)
#define MAX (ll)(1LL << 31) - 1

const ll mx = 100002;
vector< pair<ll,ll>>v[mx];
ll arr[mx];
ll path[mx];
ll dijk ()
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>p;
    p.push({0,1});
    while(!p.empty())
    {
        ll u = p.top().ss;
        ll now = p.top().ff;
        p.pop();
        for(auto a : v[u])
        {
            if( a.ss + now < arr[a.ff])
            {
                arr[a.ff]= a.ss + now;
                p.push({arr[a.ff],a.ff});
                path[a.ff]=u;
            }
        }
    }

}
int main()
{

    ll n,m;
    cin>>n>>m;
    forc(0,n+3)
    arr[i]=LLONG_MAX;
    ll u,p,w;
    forc(0,m)
    {
        cin>>u>>p>>w;
        v[u].pb({p,w});
        v[p].pb({u,w});
    }
    arr[1] =0;
    dijk();
    forc(1,n+1)
    cout<<ar[i]<<" ";
    return 0;
}
