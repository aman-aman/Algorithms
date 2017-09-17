#include<stdio.h>
/*
aman kumar jha
*/
//Dynamic programming approach to ncr
int ncr(int n,int r)
{
	int c[n+1][r+1],i,j,k;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=((i>r)?r:i);j++)
		{
			if(j==0||j==i)
			{
				c[i][j]=1;
			}
			else
			{
				c[i][j]=c[i-1][j]+c[i-1][j-1];
			}
		}
	}
	return c[n][r];
}
int main()
{
	int n,r;
	printf("enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	printf("value of %dC%d is : %d",n,r,ncr(n,r))	;
}
