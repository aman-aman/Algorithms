#include<bits/stdc++.h>
using namespace std;
/*
This program uses bit manipulation to generate all of the subsequence of given array.
This program can also be used for Strings.

aman kumar jha
*/
void getsubsequences(int arr[], int n)
{
    int s=pow(2,n);
    for (int i=1;i<s;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i&(1<<j))
                cout<<arr[j]<<" ";
        }
        cout <<"\n";
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    getsubsequences(a,n);

}
