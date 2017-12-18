#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
/*
You will be given a positive integer N.
Your task is to find the number of positive integers K ≤ N such that K is not divisible by any number among the set {2,3,4,5,6,7,8,9,10}.
*/
#define ll long long

int main()
{
        ll n;
        cin>>n;
        ll c=0;
        c+=n/2+n/3+n/5+n/7-n/6-n/10-n/14-n/15-n/21-n/35+n/30+n/42+n/70+n/105-n/210;
        ll  res=n-c;
        cout<<res<<"\n";
}
