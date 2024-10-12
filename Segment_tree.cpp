///Bismillah - Segment Tree
///Update and query O(log(n)), Build N * 4
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 12;
int a[N];
int t[N * 4];

///means in node "node" there is a range begins with array index "b" and ends with array index "e"
void build(int node, int b, int e)
{
    if(b == e)///segment with one element base case
    {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;///childs of parent "node" are l ,r
    int mid = ( b + e) / 2;
    ///building two child
    build(l,b, mid);
    build(r, mid + 1, e);
    ///now the child of node "node" is build , and the sum of node = sum of child,
    t[node] = t[l] + t[r];
}

///need sum of range (i - j) currently in node "node" that contains the sum of range (b - e)
int query(int node,int b,int e, int i, int j )
{
    if( b > j or e <i) return 0;///not in the range
    if(b >=i and e <= j)///means this need is fully in the given range
        return t[node];
    ///current range intersects i- j,so go to the left right child
    int l = 2 * node, r = 2 * node + 1;///childs of parent "node" are l ,r
    int mid = ( b + e) / 2;
    return query(l, b,mid,i, j) + query(r, mid + 1,e, i,j);
}
///currently in Node "node" ( b - e ), have to update index i with x
void upd(int node, int b, int e, int i, int x)
{
    if( b > i or e < i) return;
    if( b == e and b == i)
    {
        t[node] = x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;///childs of parent "node" are l ,r
    int mid = ( b + e) / 2;
    upd(l, b,mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}


int main()
{
    int n;
    cin>>n;
    for( int i = 1; i <= n; i++)
        cin>>a[i];

    build(1, 1, n);
    //cout<<t[1]<<endl;
    upd(1,1,n,3,2);
    cout<<query(1,1,n,1,5)<<endl;
}
