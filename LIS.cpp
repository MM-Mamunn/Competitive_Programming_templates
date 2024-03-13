#include<bits/stdc++.h>

using namespace std;
///Longest incresing subsequence
///Itereative, best for LIS

const int N = 1010;;
int a[N],dp[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i =1;i <= n;i++)
    {
        cin>>a[i];
    }
    ///two way,either ith element will be taken, or not
    for(int i = 1; i<= n ; i++)
    {
        ///ith elemnent not taken( 1 is for if we consider ith element it's itself a subsequence of length 1
        dp[i] = max(1,dp[i - 1] );
        ///ith element taken
        ///all the element from 1st to i - 1 indexed value which are less then(or equal) thn a[i] are considered
        ///the answer for the ith indexed is then 1 + the maximum LIS from the previous values, 1 is for ith element also included
        for(int j = 1; j < i;j++)
        {
            ///if 3 4 4 5 is valid make a[j] < a[i] to a[j] <= a[i]
            if(a[j] < a[i])
            {
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
    }
    cout<<dp[n]<<endl;
}
