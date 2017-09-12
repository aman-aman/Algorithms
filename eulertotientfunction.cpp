#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int phi(int n)
{
    float r=n;
    for (int p=2;p*p<=n;++p)
    {
        if(n%p==0)
        {
            while(n%p==0)
                n/=p;
            r=r*(1.0-(1.0/(float) p));
        }
    }
    if (n>1)
        r=r*(1.0-(1.0/(float) n));
    return (int)r;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Number of coprimes are:"<<phi(n)<<"\n";
}
