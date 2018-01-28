//aman kumar jha
/*
Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j. For simplicity, we may assume that all elements are unique.
*/
#include<bits/stdc++.h>
using namespace std;
int inversion(int a[],int l,int h)
{
    int m=(l+h)/2;
    int i=l,j=m+1;
    int f[h-l+1];
    int inv=0,k=0;
    while(i<=m&&j<=h)
    {
        if(a[i]<=a[j])
       {
           f[k++]=a[i++];
       }
        else
       {
           f[k++]=a[j++];
           inv+=(m-i+1);
       }
    }
    while(i<=m)
    {
        f[k++]=a[i++];
    }
    while(j<=h)
    {
        f[k++]=a[j++];
    }
    for(i=0;i<h-l+1;i++)
    {
        a[i+l]=f[i];
    }
    return inv;
}
int countinversion(int a[],int l,int h)
{
    int m=(l+h)/2;
    int x,y,z;
    if(l>=h)
        return 0;
    x=countinversion(a,l,m);
    y=countinversion(a,m+1,h);
    z=inversion(a,l,h);
    return x+y+z;
}
int main()
{
    int a[]= {9, 8 , 7, 6, 5, 4, 3, 2, 1, 10};
    cout<<"Number of Inversion: "<<countinversion(a,0,9);
}
