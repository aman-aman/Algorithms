#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
//Dynamic programming approach to ncr%p
int ncrmodp(int n, int r, int p)
{
    int c[r+1];
    c[0]=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=min(i,r);j>0;j--)
        {
         c[j] = (c[j] + c[j-1])%p;
        }
    }
    return c[r];
}

int main()
{
    int n,r,p;
    cout<<"Enter the value of n,r,p\n";
    scanf("%d%d%d",&n,&r,&p);
    cout<<ncrmodp(n,r,p)<<"\n";
    return 0;
}
