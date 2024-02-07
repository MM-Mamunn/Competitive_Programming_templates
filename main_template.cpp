#include<bits/stdc++.h>
#include <numeric>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define forc(c,n) for(int i=c;i<n;i++)
#define PI (acos(-1.0))
#define pb push_back
#define vi vector<long long >
#define all(a) sort(a.begin(),a.end());
#define atoz(a)  a.begin(),a.end()
#define rall(a) sort(a.rbegin(),a.rend());
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

///pbds
# define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
///cout<<x.order_of_key(n) means how many element less than n in pbds x

ll mod=1000000000+7;
const double eps=1e-9;
int dx[]= {-1, 1, 0, 0, -1,-1, 1, 1};
int dy[]= { 0, 0,-1, 1, -1, 1,-1, 1};
inline void file() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

}
template < typename F, typename S > ostream& operator << ( ostream& os, const pair< F, S > & p ) { return os << "(" << p.first << ", " << p.second << ")"; }
template < typename T > ostream &operator << ( ostream & os, const vector< T > &v ) { os << "{"; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", ";  os << *it; }  return os << "}";  }
template < typename T >  ostream &operator << ( ostream & os, const set< T > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << *it;  } return os << "]"; }
template < typename T > ostream &operator << ( ostream & os, const multiset< T > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << *it; } return os << "]"; }
template < typename F, typename S > ostream &operator << ( ostream & os, const map< F, S > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << it -> first << " = " << it -> second ; } return os << "]";  }
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () { cerr << endl; }
template <typename T> void faltu( T a[], int n ) {   for(int i = 0; i < n; ++i) cerr << a[i] << ' '; cerr << endl;  }
template <typename T, typename ... hello>  void faltu( T arg, const hello &... rest) {   cerr << arg << ' ';  faltu(rest...);  }
//-------

bool cmp(const pair<int,int> &p1 ,const pair<int ,int> &p2)
{
    if(p1.first>p2.first) return true;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return false;
}

ll poww(ll x, ll n) // optimize power function log(n)
{
    ll result = 1;
    while (n > 0) {
        if (n & 1LL == 1) // y is odd
        {
            result = (result * x);
        }
        x = (x * x);
        n = n >> 1LL; // y=y/2;
    }
    return result;
}

///_______________________MAMUN___________________________


void solve()
{
ll n;
}
int32_t main()
{
  // ios_base::sync_with_stdio(0);
 //  cin.tie(0);
  //file();
  int t=1;
//  cin>>t;
  while(t--)
  {
      solve();
  }

    return 0;
}
