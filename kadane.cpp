#include<bits/stdc++.h>
using namespace std;
//This works for continuous subarray
//aman kumar jha
int kadane(int a[], int n)
{
    int gsum = 0, sum = 0;
    for (int i=0;i<n;i++)
    {
        sum = sum + a[i];
        if (gsum < sum)
            gsum = sum;
        if (sum < 0)
            sum = 0;
    }
    return gsum;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",kadane(a,n));
}
