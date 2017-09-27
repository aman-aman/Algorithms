
#include<bits/stdc++.h>
using namespace std;
/*
This program can be used to check the ith bit of the number is 1(ie setbit) or not in the binary representation of a number.
aman kumar jha
*/
bool checkithbit(int n,int i)
{
	if(n&(1<<i))
		return true;
	else
	    return false;
}
int main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the bit position: ");
	scanf("%d",&i);
	if(checkithbit(n,i))
	{
		printf("Yes.\n");
	}
	else
	{
		printf("No.\n");
	}
}
