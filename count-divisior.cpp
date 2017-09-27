#include <bits/stdc++.h>
using namespace std;
/*
aman kumar jha
This algorithm count the number of divisors of a number in O(sqrt(n)) time.
*/
int countdivisor(int n)
{
    int c=0;
    for (int i=1; i<=sqrt(n); i++)
    {
         if (n%i==0)
         {
            if (n/i == i)
               c++;
            else
                c=c+2;
         }
     }
    return c;
}
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Number of divisor of %d is: %d\n",n,countdivisor(n));
    return 0;
}
