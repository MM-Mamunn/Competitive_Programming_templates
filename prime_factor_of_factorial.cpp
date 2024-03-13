
#include<bits/stdc++.h>

using namespace std;

/// complexity O (n log( log(n ) ) )
const int N= 1e6+9;
bitset<N>prime;
vector<int>prm;
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
    for(int i =2 ;i<N;i++)
        if(prime[i])
          prm.push_back(i);
}
void prime_fact_of_factorial(int n)
{
    for(auto p : prm)
    {
        if(p> n)
            break;
        int e =0;
        for(int i =2;i<=n;i++)
        {
            int temp = i;
            while(temp % p ==0)
            {
                ++e;
                temp/=p;
            }
        }
        if(e)
        cout<<"prime "<<p<<"^"<<e<<endl;
    }
}

int32_t main()
{
    int n;
    cin>>n;
    sieve();
    prime_fact_of_factorial(n);
    return 0;
}



///More efficient
//#include<bits/stdc++.h>
//
//using namespace std;
//
///// complexity O (n log( log(n ) ) )
//const int N= 1e6+9;
//bitset<N>prime;
//vector<int>prm;
//void sieve()
//{
//    for(int i =1;i<N;i++)
//        prime[i]=true;
//    prime[1]=false;
//    for(int i = 2;i*i<N;i++)
//    {
//        if(prime[i])
//        {
//            for(int j = i*i;j<N;j+=i)
//                prime[j]=false;
//        }
//    }
//    for(int i =2 ;i<N;i++)
//        if(prime[i])
//          prm.push_back(i);
//}
//void prime_fact_of_factorial(int n)
//{
//    for(auto p : prm)
//    {
//        if(p> n)
//            break;
//        int e =0;
//        for(int i = p ;i <= n;i += p)
//        {
//            int temp = i;
//            while(temp % p ==0)
//            {
//                ++e;
//                temp/=p;
//            }
//        }
//        if(e)
//        cout<<"prime "<<p<<"^"<<e<<endl;
//    }
//}
//
//int32_t main()
//{
//    int n;
//    cin>>n;
//    sieve();
//    prime_fact_of_factorial(n);
//    return 0;
//}
