#include <iostream>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevvalue = power(n, p - 1);
    return n * prevvalue;
}
int main()
{
    //   ismae hum n*p nikal rhe hoge kase n*n^p-1 which equal to n
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;
    return 0;
}