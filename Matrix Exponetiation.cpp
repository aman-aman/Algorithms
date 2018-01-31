//aman kumar jha
/*
It is a method to calculate the nth fibonacci number in O(log(n)) time.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fib[2][2]={{1,1},{1,0}};
    int ret[2][2]={{1,0},{0,1}};
    int temp[2][2]={{0,0},{0,0}};
    int n;
    cin>>n;
    while(n)
    {
            if(n&1)
            {
                memset(temp,0,sizeof(temp));
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {
                        for(int k=0;k<2;k++)
                        {
                            temp[i][j]=temp[i][j]+ret[i][k]*fib[k][j];
                        }
                    }
                }
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {
                        ret[i][j]=temp[i][j];
                    }
                }
            }
            memset(temp,0,sizeof(temp));
            for(int i=0; i<2; i++)
            {
                for(int j=0;j<2;j++)
                {
                     for(int k=0;k<2;k++)
                     {
                        temp[i][j]=(temp[i][j]+fib[i][k]*fib[k][j]);
                     }
                }
            }
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    fib[i][j]=temp[i][j];
                }
            }
            n=n/2;
    }
    printf("Fibonacci number : %d\n",ret[0][1]);
}
