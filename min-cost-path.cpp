//aman kumar jha
#include<bits/stdc++.h>
using namespace std;

int mincost(int cost[][3],int n,int m)
{
    int dp[n][m];
    dp[0][0]=cost[0][0];
    for(int i=1;i<n;i++)
        dp[i][0]=cost[i][0]+dp[i-1][0];

    for(int j=1;j<n;j++)
        dp[0][j]=cost[0][j]+dp[0][j-1];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+cost[i][j];
        }
    }
    return dp[n-1][m-1];
}
int main()
{

    int cost[3][3] = { {1, 2, 3},{4, 8, 2},{1, 5, 3} };
    printf("Min-Cost: %d\n", mincost(cost,3,3));
}
