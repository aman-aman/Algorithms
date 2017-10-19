#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
#define ll long long
int main()
{

    ll n,m;
    scanf("%lld%lld",&n,&m);
    ll a[n][m];
    for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	ll q;
	scanf("%lld",&q);
	while(q--)
	{
		ll key;
        scanf("%lld",&key);

        ll i=0,j=m-1;
		while(1)
		{
			if(key==a[i][j])
			{
				printf("%lld %lld\n",i,j);
				break;
			}
			if(key<a[i][j])
			{
				j=j-1;
				if(j<0)
				{
					cout<<-1<<" "<<-1<<"\n";
					break;
				}
			}
			else
			{
				i=i+1;
				if(i>n-1)
				{
					cout<<-1<<" "<<-1<<"\n";
					break;
				}
			}
		}
	}

}
