#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{

        string s;
        cin>>s;

        int n=s.length();
        int dp[n][n];
        int maxlen=0;
        for(int i=0;i<n;i++)
            dp[i][i]=s[i]-'0';

        for(int l=2;l<=n;l++)
        {
            for(int i=0;i<n-l+1;i++)
            {
                int j=i+l-1;
                int k=l/2;

                dp[i][j]=dp[i][j-k]+dp[j-k+1][j];
                if(l%2==0&&dp[i][j-k]==dp[(j-k+1)][j]&&l>maxlen)
                    maxlen=l;
            }
        }
        cout<<maxlen<<"\n";

}
