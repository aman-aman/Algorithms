#include<bits/stdc++.h>
using namespace std;
#define ll long long
//aman kumar jha
ll mod=1000000007;
int main()
{
    ll t;
    ll dp[101];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(ll i=3;i<=100;i++)
        dp[i]=(dp[i-1]+((i-1)*dp[i-2]))%mod;


        ll n;
        scanf("%lld",&n);
        printf("%lld\n",dp[n]);
}
