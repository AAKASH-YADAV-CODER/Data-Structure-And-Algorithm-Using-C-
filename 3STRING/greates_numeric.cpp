#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    /*string s="456461231";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;*/
    //   now   question is to get max repeated no. and character in the string
    string s = "ajhfioadhfuajakladjdkafjafl;";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int MaxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > MaxF)
        {
            MaxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << MaxF << " " << ans << endl;

    return 0;
}