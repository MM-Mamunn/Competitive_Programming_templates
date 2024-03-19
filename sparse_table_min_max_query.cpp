#include<bits/stdc++.h>
using namespace std;
///finds the minimum element in a given range in O(1)
///pre calculate O(nlogn) + queries * O(1) = O( nlogn )
const int MAX_N = 1e5;
const int LOG = 17;
int a[MAX_N];
int m[MAX_N][LOG]; /// m[i][j] is minimum among a[i . . i + 2^j -1]
/// 1 2 3 4 5 6 7 8 m[3][2] is minimum among 3,4,5,6

int query(int L , int R)
{
    int length = R - L + 1;
    int k = 0;

    ///floor of maximum power in the span
    ///if length = 10 , k = 3  ///(2^3) <= length
    ///finding min or max element in O(1)
    while( (1 << (k + 1)) <= length)
        k++;
    return min(m[L][k],m[R - (1<<k) + 1][k]);
}

int32_t main()
{
    int n;
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>a[i];
        m[i][0] = a[i];
        ///m[i][0] minimum of 1 length is the element itself, (2^0) = 1 length
    }
    ///precalculate
    for(int k = 1;k < LOG;k++){
        for(int i = 0;i + (1<< k) -1 < n ;i++)
        {
            m[i][k] = min(m[i][k-1], m[i+ (1<<(k-1)) ][k -1]);
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int L, R;
        cin>>L>>R;
        cout<<query(L,R)<<'\n';
    }

    return 0;
}
