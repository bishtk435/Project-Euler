#include<bits/stdc++.h>
using namespace std;
bool isPrime(unsigned long long a)
{
    for(int i=2;i<=sqrt(a);++i)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    unsigned long long ans=0;
    for(unsigned long long i=2;i<2000000;++i)
    {
        if(isPrime(i))
            ans+=i;
    }
    cout<<ans;
    return 0;
}
