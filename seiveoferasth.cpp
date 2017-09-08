#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    vector<bool> prime(n,true);

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}
int main()
{
    int n;
    cin>>n;
    seive(n);
    return 0;
}

