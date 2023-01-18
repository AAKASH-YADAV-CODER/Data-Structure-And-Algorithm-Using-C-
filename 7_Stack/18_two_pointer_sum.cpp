#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool found = false;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, hi = n - 1;
        while (low < hi)
        {
            int curr = arr[i] + arr[low] + arr[hi];
            if (curr == target)
            {
                found = true;
            }
            if (curr < target)
            {
                low++;
            }
            else
            {
                hi--;
            }
        }
    }
    if (found)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
    return 0;
}