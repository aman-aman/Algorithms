//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int coin[2];
        coin[0]=10;
        coin[1]=12;
        int dp[n+1];
        dp[0]=0;
        for(int i=1;i<=n;i++)
            dp[i]=INT_MAX;

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(coin[j]<=i)
                {
                    if(dp[i-coin[j]]!=INT_MAX)
                        dp[i]=min(dp[i],1+dp[i-coin[j]]);
                }
            }
        }
        if(dp[n]!=INT_MAX)
            cout<<dp[n]<<"\n";
        else
            cout<<-1<<"\n";
    }
}
