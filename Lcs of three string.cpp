#include<bits/stdc++.h>
using namespace std;
/*
Given 3 strings X, Y and Z, the task is to find the longest common sub-sequence in all three given sequences.
*/
//aman kumar jha
int main()
{
        int n,m,o;
        cin>>n>>m>>o;
        string x,y,z;
        cin>>x>>y>>z;

        int dp[n+1][m+1][o+1];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                for(int k=0;k<=o;k++)
                {
                    if (i==0||j==0||k==0)
                        dp[i][j][k]=0;
                    else if (x[i-1]==y[j-1]&&x[i-1]==z[k-1])
                        dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                    else
                        dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
                }
            }
        }

        cout<<dp[n][m][o]<<"\n";
}
