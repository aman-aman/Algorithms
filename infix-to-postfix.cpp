//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
	switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}
int isoperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')||(ch>='0'&&ch<='9');
}

string infixtopostfix(string s)
{
	stack<char> st;
	string postfix;
	for(int i=0;i<s.length();i++)
	{
		if (isoperand(s[i]))
			postfix+=s[i];
		else if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')')
		{
			while (!st.empty()&&st.top()!= '(')
			{
				postfix+=st.top();
				st.pop();
			}
			if (!st.empty()&&st.top()!= '(')
						return "";
			else
				st.pop();
		}
		else
		{
			while (!st.empty()&&precedence(s[i])<=precedence(st.top()))
			{
				postfix+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty())
	{
		postfix += st.top();
		st.pop();
	}
	return postfix;
}
int main()
{

	string s="a+b*(c^d-e)^(f+g*h)-i";
	cout<<infixtopostfix(s);
}
