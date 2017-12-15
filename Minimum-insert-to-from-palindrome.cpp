#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{

        string s;
        cout<<"Enter a string: ";
        cin>>s;
        int n=s.length();
        int dp[n][n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                dp[i][j]=0;
        }

        for(int i=1;i<n;i++)
        {
            for(int l=0,h=i;h<n;l++,h++)
            {
                dp[l][h]=(s[l]==s[h])?dp[l+1][h-1]:min(dp[l+1][h],dp[l][h-1])+1;
            }
        }
        cout<<"Minimum insertion to from palindrome: "<<dp[0][n-1]<<"\n";
}
