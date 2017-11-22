#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
bool subset(int s[],int sum,int n)
{
    bool dp[n][sum+1];
    for(int i=0;i<n;i++)
        dp[i][0]=true;

    for(int j=0;j<=sum;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(j>=s[i])
                dp[i][j]=dp[i-1][j-s[i]]||dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }

    return dp[n-1][sum];
}
int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    if(subset(set,sum,6))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
