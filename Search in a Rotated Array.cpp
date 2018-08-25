#include<bits/stdc++.h>
using namespace std;
#define ll long long
int findpivot(int a[],int l,int h)
{
    if(l>h)
        return -1;
    if(l==h)
        return l;
    int m=(l+h)/2;
    if(l<m&&a[m-1]>a[m])
        return m;
    if(m<h&&a[m]<a[m+1])
        return m+1;
    if(a[m]<=a[h])
        return findpivot(a,l,m-1);
    return findpivot(a,m+1,h);
}
int binarysearch(int a[],int l,int h,int key)
{
    if(l>h)
        return -1;
    int m=(l+h)/2;
    if(a[m]==key)
        return m;
    else if(a[m]<key)
        return binarysearch(a,m+1,h,key);
    else
        return binarysearch(a,l,m-1,key);
}
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
        int n,key,ans=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
	   int pivot=findpivot(a,0,n-1);
	   if(pivot==-1)
        ans=binarysearch(a,0,n-1,key);
       else
       {
           if(key==a[pivot])
            ans=pivot;
           else if(a[0]<key)
            ans=binarysearch(a,0,pivot-1,key);
           else if(a[0]>=key)
            ans=binarysearch(a,pivot+1,n-1,key);

       }


        cout<<ans<<"\n";
	}
}
