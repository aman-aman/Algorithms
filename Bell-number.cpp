#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int n;
    cin>>n;
    int dp[n+1][n+1];
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=dp[i-1][i-1];
        for(int j=1;j<=i;j++)
        {
            dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
        }
    }

    cout<<"Bell Triangle\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<dp[i][j]<<" ";

        cout<<"\n";
    }
    cout<<"Nth Bell number: ";
    cout<<dp[n-1][n-1]<<"\n";

}
