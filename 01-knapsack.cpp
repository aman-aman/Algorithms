#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int knapsack(int cap,int wt[],int val[],int n)
{
   int k[n+1][cap+1];
   for (int i=0;i<=n;i++)
   {
       for (int j=0;j<=cap;j++)
       {
           if (i==0||j==0)
               k[i][j]=0;
           else if (wt[i-1]<=j)
                 k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
           else
                 k[i][j] = k[i-1][j];
       }
   }
   return k[n][cap];
}

int main()
{
    int n,cap;
    printf("enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the capacity of knapsack: ");
    scanf("%d",&cap);
    int val[n],wt[n];
    printf("Enter the corresponding weight and value of element\n");
    for(int i=0;i<n;i++)
	{
		scanf("%d%d",&wt[i],&val[i]);
	}
    printf("%d",knapsack(cap,wt,val,n));
}
