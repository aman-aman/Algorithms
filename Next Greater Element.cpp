//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
void nextgreater(vector<int> a)
{
        int n=a.size();
        stack<int> st;
        vector<int> nge(n,0);
        int i=0;
        while(i<n)
        {
            if(st.empty())
            {
                st.push(i);
                i++;
            }
            else
            {
             int temp=st.top();
                if(a[temp]<a[i])
                {
                    st.pop();
                    nge[temp]=i;
                }
                else
                {
                    st.push(i);
                    i++;
                }
            }
        }
        while(!st.empty())
        {
            nge[st.top()]=-1;
            st.pop();
        }
        for(auto x:a)
            cout<<x<<" ";
        cout<<"\n";
        for(auto x:nge)
       {
        if(x==-1)
            cout<<x<<" ";
        else
            cout<<a[x]<<" ";
        }
}
int main()
{
    int n,a;
    cout<<"Enter the number of element\n";
    cin>>n;
    vector<int> vec;
    while(n--)
    {
        cin>>a;
        vec.push_back(a);
    }
    nextgreater(vec);
}
