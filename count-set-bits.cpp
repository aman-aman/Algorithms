#include<bits/stdc++.h>
using namespace std;
/*
This program can be used to count the number of 1(ie setbit) is the binary representation of a number.
aman kumar jha
*/
int countsetbit(int n)
{
	int c=0;
	while(n)
	{
	n = n&(n-1);
	   c++;
	}
	return c;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("%d\n",countsetbit(n));
}
