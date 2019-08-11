// Find maximum depth of nested parenthesis in a string

// We are given a string having parenthesis like below
//     “( ((X)) (((Y))) )”
// We need to find the maximum depth of balanced parenthesis, like 4 in above example. Since ‘Y’ is surrounded by 4 balanced parenthesis.
// If parenthesis are unbalanced then return -1.

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int parenthesis(string ex)
{
    int l = ex.length();
    int i,ct=0,maxct=0;
    stack<char> s;
    char ch;
    for(i=0;i<l;i++)
    {
        if(ex[i]=='(')
        {    
            s.push(ex[i]);
            ct++;
        }
        
        if(s.empty())
            return 0;
            
        if(ex[i]==')')
        {
            ch = s.top();
            s.pop();
            ct--;
        }
        if(ct>maxct)
            maxct = ct;
    }
    if(s.empty())
        return maxct;
    else
        return -1;
}

int main()
{
    string expr = "( p((q)) ((s)t) )";
    cout<<parenthesis(expr)<<endl;
    string expression = "({)}[]";
    cout<<parenthesis(expression)<<endl;    
    return 0;
}
