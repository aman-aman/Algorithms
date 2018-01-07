//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int evaluate(string exp)
{
    stack<int> st;
    for (int i=0;exp[i];i++)
    {
        if (isdigit(exp[i]))
            st.push(exp[i] - '0');
        else
        {
            int val1=st.top();st.pop();
            int val2=st.top();st.pop();
            switch (exp[i])
            {
             case '+': st.push(val1+val2); break;
             case '-': st.push(val2-val1); break;
             case '*': st.push(val1*val2); break;
             case '/': st.push(val2/val1); break;
            }
        }
    }
    int val=st.top();
    return val;

}
int main()
{

    string s="231*+9-";
    cout<<evaluate(s)<<"\n";
}
