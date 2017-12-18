#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
/*
Given a string str, find length of the longest repeating subseequence such that the two subsequence don’t
have same string character at same position, i.e., any i’th character in the two subsequences shouldn’t have
the same index in the original string.
*/
int main()
{
        int n;
        scanf("%d",&n);
        string s;
        cin>>s;

        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
                dp[i][j]=0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=(s[i-1]==s[j-1]&&i!=j)?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
            }
        }

        printf("%d\n",dp[n][n]);

}
