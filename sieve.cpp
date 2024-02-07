#include<bits/stdc++.h>

using namespace std;

/// complexity O (n log( log(n ) ) )
const int N= 1e6+9;
bitset<N>prime;
void sieve()
{
    for(int i =1;i<N;i++)
        prime[i]=true;
    prime[1]=false;
    for(int i = 2;i*i<N;i++)
    {
        if(prime[i])
        {
            for(int j = i*i;j<N;j+=i)
                prime[j]=false;
        }
    }
}

int32_t main()
{

    sieve();
    return 0;
}
