#include<bits/stdc++.h>

using namespace std;

/// spf for pf :: complexity O (n log(n))
const int N =1e4;
int spf[N];
void smallest_pf()
{
 for(int i =1;i<N;i++)
    spf[i] =i;
/// if any error make the i*i as i only
 for(int i =2;i*i<N;i++)
 {
     if (spf[i] == i)
     {
         for(int j = i;j<N;j+=i)
            spf[j]=min(spf[j],i);
     }
 }

}

int32_t main()
{

    smallest_pf();
    return 0;
}