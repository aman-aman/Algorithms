#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
long long multiply(long long n, long long m)
{
	long long ans = 0, count = 0;
	while (m)
	{
		if (m % 2 == 1)
			{
				ans += n << count;
			}
		count++;
		m /= 2;
	}
	return ans;
}
int main()
{
	long long n,m;
	cin>>n>>m;
	cout<<multiply(n,m)<<"\n";
}



