#include <bits/stdc++.h>
using namespace std;
int uniqueno(int arr[], int n)
{
    int xorsum = 0;//xorsum property use karke with 0 we get unique no.
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[] = {1, 2, 3, 44, 3, 2, 1};
    cout << uniqueno(arr, 7) << endl;
    return 0;
}