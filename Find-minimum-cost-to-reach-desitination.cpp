#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
/*
There are N stations on route of a train.
The train goes from station 0 to N-1.
The ticket cost for all pair of stations (i, j) is given where j is greater than i.
Find the minimum cost to reach the destination.
*/
int INF=INT_MAX;
int main()
{
    int n=4;
    int cost[4][4] = { {0, 15, 80, 90},
                      {INF, 0, 40, 50},
                      {INF, INF, 0, 70},
                      {INF, INF, INF, 0}
                    };
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=INT_MAX;
    dp[0]=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dp[j]=min(cost[i][j]+dp[i],dp[j]);
        }
    }

    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<"\n";

}
