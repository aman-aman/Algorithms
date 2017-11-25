#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int getminjump(int a[],int n)
{
    if(a[0]==0)
        return -1;

    else
    {
        int jump[n];
        jump[0]=0;
        for(int i=1;i<n;i++)
        {
            jump[i]=INT_MAX;
            for(int j=0;j<i;j++)
            {
                if(i<=j+a[j]&&jump[j]!=INT_MAX)
                {
                    jump[i]=min(jump[i],jump[j]+1);
                    break;
                }
            }
        }

        return jump[n-1];
    }
}
int main()
{
    int arr[] = {1,3,5,8,9,2,6,7,6,8,9};
    int res=getminjump(arr,11);
    if(res==-1)
        printf("Not Possible to reach the end\n");
    else
        printf("Minimum number of jump to reach end: %d\n",res);
}
