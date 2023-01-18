#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
// its based upon ascii value
    //   cout<<'a'-'A'<<endl;
    // so basically 32 ka differance hai tho humee minus krna hai 32 se
    string str = "suiehsjihjsdf";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //         str[i] -=32;
    // }
    // cout << str <<endl;
    // this is for upper case and for lower case vice versa
    // another in built method
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str;

    return 0;
}