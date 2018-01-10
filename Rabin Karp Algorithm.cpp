//aman kumar jha
#include<bits/stdc++.h>
using namespace std;

void rabinkarp(string txt,string pat,int q)
{
    int m =pat.length();
    int n =txt.length();
    int i,j,p=0,t=0,h=1,d=256;

    for (i=0;i<m-1;i++)
        h=(h*d)%q;
    for(i=0;i<m;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    for(i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            for(j=0;j<m;j++)
            {
                if (txt[i+j]!=pat[j])
                    break;
            }
            if(j==m)
                printf("Pattern found at index : %d\n",i);
        }
        if(i<n-m)
        {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if(t<0)
                t=(t+q);
        }
    }
}
int main()
{
    string txt="AABAACAADAABAABA";
    string pat="AABA";
    rabinkarp(txt,pat,101);
}
