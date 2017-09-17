#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/bool isprime(int n)
{
    for (int i=2;i*i<=n;++i)
	{
        if (n%i==0)
		{
            return false;
        }
    }
    return true;
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if(isprime(n))
		printf("Prime number\n");
	else
		printf("Not a prime number\n");

}
