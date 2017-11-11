
#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    deque<int> dq(3);
    int a[] = {12, 1, 78, 90, 57, 89, 56};
	int k=3,n=7,i;
	for(i=0;i<k;i++)
	{
		while((!dq.empty())&&(a[i]>=a[dq.back()]))
			dq.pop_back();

		dq.push_back(i);
	}
	for(;i<n;i++)
	{
		cout<<a[dq.front()]<<" ";
		while((!dq.empty())&&(dq.front()<=i-k))
			dq.pop_front();

		while((!dq.empty())&&(a[i]>=a[dq.back()]))
			dq.pop_back();

		dq.push_back(i);
	}
	cout<<a[dq.front()]<<" ";
}
