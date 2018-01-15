#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int maxprofit(int a[],int n)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int val=INT_MIN;
        for(int j=0;j<i;j++)
        {
            val=max(val,a[j]+dp[i-j-1]);
        }
        dp[i]=val;
    }
    return dp[n];
}
int main()
{
    // length of rod is 8
    int a[] = {1,5,8,9,10,17,17,20};
    int n=8;
    printf("Max Value: %d\n",maxprofit(a,n));
}
