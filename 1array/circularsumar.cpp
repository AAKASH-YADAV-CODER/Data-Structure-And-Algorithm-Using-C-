// isme element of arr rap karne lagti hai last wali element phele se tho dikkat ye hai ki jo neg ele hai vo bhi rap krne lagta hai so usko phele 0  banya with the help of kadane and then rap and non wrap ko campare kiya
#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int rapsum;
    int nonrapsum;
    nonrapsum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    rapsum = totalsum + kadane(arr, n);
    cout << max(rapsum, nonrapsum) << endl;
    return 0;
}