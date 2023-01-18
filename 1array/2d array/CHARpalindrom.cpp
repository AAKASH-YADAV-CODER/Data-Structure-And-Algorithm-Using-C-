// palindrome unne khate hai jinko hum ulta kr de tho bhi same honge like nitin and anna etc.
#include <iostream>
using namespace std;
int main()
{
    //   check palindrome
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == true)
    {
        cout << "word is palindrome\n";
    }
    else
    {
        cout << " not palindrome\n";
    }
    return 0;
}