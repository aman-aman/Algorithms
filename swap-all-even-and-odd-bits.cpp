#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
unsigned int swapevenoddbit(unsigned int x)
{
    unsigned int e=x&0xAAAAAAAA;
    unsigned int o=x&0x55555555;
    e>>=1;
    o<<=1;
    return (e|o);
}

int main()
{
    unsigned int x;
    cin>>x;
    printf("%u ", swapevenoddbit(x));
}
