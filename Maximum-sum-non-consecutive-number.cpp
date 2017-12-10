#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int exc=0,inc=a[0];
        for(int i=1;i<n;i++)
        {
            int exl=max(exc,inc);
            inc=exc+a[i];
            exc=exl;
        }

        cout<<max(exc,inc)<<"\n";
    }
}
