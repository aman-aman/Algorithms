/*
Given binary square matrix [n*n]. Find maximum integer value in a path from top left to bottom right.
We compute integer value using bits of traversed path. We start at index [0,0] and end at index [n-1][n-1].
from index [i, j], we can move [i, j+1] or [i+1, j].
*/
//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int mat[][4] = {{ 1 ,1 ,0 ,1 },
        { 0 ,1 ,1 ,0 },
        { 1 ,0 ,0 ,1 },
        { 1 ,0 ,1 ,1 },
    };
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=0;
        }
    }
    dp[0][0]=(mat[0][0]==1)?1:0;
    for(int i=1;i<n;i++)
    {
        dp[0][i]=mat[0][i]==1?dp[0][i-1]+pow(2,i):dp[0][i-1];
    }

    for(int i=1;i<n;i++)
    {
        dp[i][0]=(mat[i][0]==1)?dp[i-1][0]+pow(2,i):dp[i-1][0];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
             dp[i][j]=(mat[i][j]==1)?max(dp[i][j-1],dp[i-1][j])+pow(2, i+j):max(dp[i][j-1],dp[i-1][j]);
        }
    }
    cout<<"Maximum decimal value: "<<dp[n-1][n-1]<<"\n";
}
