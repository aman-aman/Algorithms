#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    int x,y,p;
   cin>>x>>y>>p;
   printf("%d\n",power(x, y, p));
   return 0;
}
