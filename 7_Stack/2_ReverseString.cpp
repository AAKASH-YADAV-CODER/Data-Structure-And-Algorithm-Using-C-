#include <iostream>
#include <stack>
using namespace std;
void reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }cout<<endl;
}
int main()
{
    string s = "how are you implementing code?";
    reverseString(s);
    return 0;
}