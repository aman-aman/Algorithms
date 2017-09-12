#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int rodcutting(int p[], int n)
{
   int val[n+1];
   val[0] = 0;
   for (int i=1;i<=n;i++)
   {
       int maxval=INT_MIN;
       for (int j = 0; j < i; j++)
         maxval=max(maxval,p[j]+val[i-j-1]);
       val[i]=maxval;
   }
   return val[n];
}
int main()
{
    //cout<<matrixchainmultiplication(p,n+1)<<"\n";
}
