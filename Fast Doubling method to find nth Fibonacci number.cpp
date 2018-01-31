#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007;
ll a,b,c,d;
//Time complexity to calculate nth fibonacci is O(log(n))
/*
Fast doubling is based on two formula
F(2n)=F(n)[2*F(n+1)-F(n)]
F(2n+1)=F(n)^2+F(n+1)^2
*/
void fastfib(ll n,ll ans[])
{
    if(n==0)
    {
        ans[0] =0;
        ans[1]=1;
        return;
    }
    fastfib((n/2),ans);
    a=ans[0];             /* F(n) */
    b=ans[1];             /* F(n+1) */
    c=2*b-a;
    if(c<0)
        c+=mod;
    c=(a*c)%mod;      /* F(2n) */
    d=(a*a+b*b)%mod;  /* F(2n + 1) */
    if(n%2==0)
    {
        ans[0]=c;
        ans[1]=d;
    }
    else
    {
        ans[0]=d;
        ans[1]=c+d;
    }
}

int main()
{
    ll n;        /* nth value to be found */
    scanf("%lld",&n);
    ll ans[2]={0};
    fastfib(n,ans);
    printf("%lld\n", ans[0]);
    return 0;
}
