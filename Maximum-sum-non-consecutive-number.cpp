#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
        int n=6;
        int a[6] = {5, 5, 10, 100, 10, 5};
        int exc=0,inc=a[0];
        for(int i=1;i<n;i++)
        {
            int exl=max(exc,inc);
            inc=exc+a[i];
            exc=exl;
        }

        cout<<"Maximum sum of non consecutive element: "<<max(exc,inc)<<"\n";
}
