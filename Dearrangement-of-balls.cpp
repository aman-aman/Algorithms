/*
Given a number n, find total number of Derangements of a set of n elements.
*/
#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
#define ll long long
ll mod=1000000007;
int main()
{

        ll n;
        cin>>n;
        ll dp[n+1];
        dp[0]=1;
        dp[1]=0;
        dp[2]=1;

        for(ll i=3;i<=n;i++)
            dp[i]=((i-1)*(dp[i-1]+dp[i-2]))%mod;

        cout<<dp[n]<<"\n";
}
