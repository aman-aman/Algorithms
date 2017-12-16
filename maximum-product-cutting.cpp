//given  a rope of n length cut it so that product of its length is maximum
//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int dp[n+1];
    dp[0]=0;
    dp[1]=0;
    for(int i=1;i<=n;i++)
    {
        int maxval=0;
        for(int j=1;j<=i/2;j++)
        {
            maxval=max(max(maxval,j*(i-j)),dp[i-j]*j);
            dp[i]=maxval;
        }
    }

    cout<<dp[n]<<"\n";
}
