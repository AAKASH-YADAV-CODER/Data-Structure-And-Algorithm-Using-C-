#include <iostream>
using namespace std;
string duplica(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = duplica(s.substr(1));
    // duplica(ans);
    if (ch == ans[0])
    {
        // cout<<ans<<endl;
        return ans;
    }
    // cout<<(ch+ans)<<endl;
    return (ch + ans);
}
int main()
{
    string s="aakashsaahdh";
    cout<<duplica(s)<<endl;
    // duplica("aakashaaaky");
    return 0;
}