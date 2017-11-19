#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int getmaxarea(int a[],int n)
{
    int area=0,maxarea=0,i=0;
    stack<int> s;
    while(i<n)
    {
        if(s.empty()||a[s.top()]<=a[i])
            s.push(i++);
        else
        {
            int top=s.top();
            s.pop();
            area=a[top]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
        }
    }

    while(!s.empty())
    {
            int top=s.top();
            s.pop();
            area=a[top]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
    }
    return maxarea;
}
int maxhisto()
{
    int n=4;
    int mat[4][4]={{0, 1, 1, 0},{1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 0, 0}};

    int area=getmaxarea(mat[0],n);
    int maxarea=max(area,maxarea);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1)
                mat[i][j]+=mat[i-1][j];
        }
        area=getmaxarea(mat[i],n);
        maxarea=max(area,maxarea);
    }
    return maxarea;
}
int main()
{
    printf("Area: %d\n",maxhisto());
}
