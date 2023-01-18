#include <iostream>
#include <string.h>
using namespace std;
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return ;
    }
    char ch = s[0];
    int code =ch;//this is for getting ascii value or code
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + ch);
    subseq(ros, to_string(code));//this is for geting ascii value of and element
}
int main()
{
    subseq("AB", "");
    return 0;
}