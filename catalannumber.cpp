/*aman kumar jha*/
#include<bits/stdc++.h>
using namespace std;
int catalan(int n)
{
    int catalan[n+1];
    catalan[0]=catalan[1]=1;
    for (int i=2; i<=n; i++)
    {
        catalan[i] = 0;
        for (int j=0; j<i; j++)
            catalan[i] += catalan[j] * catalan[i-j-1];
    }
    return catalan[n];
}

int main()
{
    int n;
    cout<<"enter the n value:\n";
    cin>>n;
    for (int i=0;i<=n;i++)
        cout<<catalan(i)<<" ";
    return 0;
}
