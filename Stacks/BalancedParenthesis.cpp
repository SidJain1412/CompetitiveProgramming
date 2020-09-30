// Check for balanced parentheses in an expression

// Given an expression string exp , write a program to examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.

// Example:

// Input: exp = “[()]{}{[()()]()}”
// Output: Balanced

// Input: exp = “[(])”
// Output: Not Balanced


#include <iostream>
#include <string>
#include <stack>
using namespace std;

int parenthesis(string s)
{
    stack<char> st;
    int l = s.length();
    int i;
    char ch;
    for(i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {    
            st.push(s[i]);
            continue;
        }
        
        if(st.empty())
            return 0;
        
        switch(s[i])
        {
            case ')':   ch = st.top();
                        st.pop();
                        if(ch!='(')
                        {
                            return 0;
                        }
                        break;
            
            case '}':   ch = st.top();
                        st.pop();
                        if(ch!='{')
                        {
                            return 0;
                        }
                        break;
            
            case ']':   ch = st.top();
                        st.pop();
                        if(ch!='[')
                        {
                            return 0;
                        }
                        break;
                        
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    cout<<"Hello World"<<endl;
    string expr = "(){}[]";
    cout<<parenthesis(expr)<<endl;
    string expression = "({)}[]";
    cout<<parenthesis(expression)<<endl;    
    return 0;
}
