#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
/*
Given a binary matrix, find out the maximum size square sub-matrix with all 1s.
*/
int main()
{

        int n=6,m=5;
        int a[6][5]={{0, 1, 1, 0, 1},
                   {1, 1, 0, 1, 0},
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}};
         int dp[n][m];

        for(int i=0;i<n;i++)
            dp[i][0]=a[i][0];
        for(int j=0;j<m;j++)
            dp[0][j]=a[0][j];

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j]=(a[i][j]==1)?min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]))+1:0;
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                res=max(res,dp[i][j]);
        }
        cout<<"Maximum size submatrix: "<<res<<" x "<<res<<"\n";
}
