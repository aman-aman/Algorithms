
//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int getmaxarea(int a[],int n)
{
    stack<int> s;
    int i=0,maxarea=0,area;
    while(i<n)
    {
        if(s.empty()||a[s.top()]<a[i])
            s.push(i++);
        else
        {
            int top=s.top();
            s.pop();
            area=a[top]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
        }
    }
    return maxarea;
}
int main()
{
    int hist[] =  {6, 1, 5, 4, 5, 2, 6};
    printf("Area: %d\n",getmaxarea(hist,7));
}
