/*
Question: An Array of integers is given, both +ve and -ve. You need to find the two elements such that their sum is closest to zero.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {1, 60, -10, 70, -80, 85};
    int l=0,r=5,pa,pb;
    int sum=0,minsum=INT_MAX;
    sort(a,a+6);
    while(l<r)
    {
        sum=a[l]+a[r];
        if(abs(sum)<abs(minsum))
        {
            pa=l;pb=r;
            minsum=sum;
        }
        if(sum<0)
            l++;
        else
            r--;
    }
    cout<<"Element are : "<<a[pa]<<","<<a[pb]<<"\n";
}
