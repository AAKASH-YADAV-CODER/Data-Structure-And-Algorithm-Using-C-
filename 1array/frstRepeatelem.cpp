#include <iostream>
using namespace std;
int main()
{
    ///  in this i gonna find out on which index  the first repeating element will be start and give that index as output
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //   ab hume N ko declare kana padega 10^6 or more remember that this value is constant
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
        // basicalyy idx use kiya hai to assigh value -1 if we not get repeated arry ele agar mile than isma minidx se compare kareke
        // value dal denge bss and minidx INT_Max isliye liya quki humee min dikana hai is value ko first repeated min.value in arr
    }
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    return 0;
}