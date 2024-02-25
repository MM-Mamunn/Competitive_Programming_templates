#include<bits/stdc++.h>

using namespace std;

///it calculates the maximum power or total power of p in N! (factorial)
///if n = 5 then n! = 120 , if p = 2 then total power of 2 is = 3;
///120 = (2 ^ 3) * (3 ^ 1) * (5 ^ 1)
int legendre(int n,int p )
{
    int ans =0;
    while(n)
    {
        ans+= n / p;
        n/=p;
    }
    return ans;

}


int32_t main()
{
    int n = 5,p =2;
    int e = legendre(n,p);
    cout<<e<<endl;
}
