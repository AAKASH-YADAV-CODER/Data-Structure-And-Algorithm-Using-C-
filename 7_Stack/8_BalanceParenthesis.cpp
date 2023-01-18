#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
bool isvalid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i]==')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i]==']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i]=='}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
    }
    
    return true;
}
int main()
{
    string s = "{[()]}";
    if (isvalid(s))
    {
        cout << "balance equation and stack is empty" << endl;
    }
    else
    {
        cout << "unbalance equation and stack is not empty" << endl;
    }
    return 0;
}