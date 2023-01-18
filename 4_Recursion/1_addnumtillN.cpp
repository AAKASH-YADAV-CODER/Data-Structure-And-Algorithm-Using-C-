#include <iostream>
using namespace std;
int add_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = add_n(n - 1);
    // here is the add_n which repeatedlly call by own
    return n + prevsum;
}
int main()
{
    //   Recursion is like function ko bar bar call krta hai for shorter the program and make it easy
    int n;
    cin>>n;
    cout<<add_n(n)<<endl;
    return 0;
}