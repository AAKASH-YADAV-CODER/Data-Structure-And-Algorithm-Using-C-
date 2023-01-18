#include <iostream>
using namespace std;
int knapshap(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapshap(value, wt, n - 1, W);
    }
    return max(knapshap(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapshap(value, wt, n - 1, W)); // idhar hum knapshap mai eek bar add kr rhai hai n element and eek bar same rhene de rhai hai remember!that ki jab add kr hai tho usme value ko add krna hai and uskii weight ko minus and value isliye add krhai quki max value chaiye question mai as compared to knapshap capacity tho value pure knapshap mai add hogi uke andar nhai*
}
int main()
{
    const int N = 1e5 + 2, MOD = 1e9 + 7;
    cout << "enter the number of objects" << endl;
    int n;
    cin >> n;
    int wt[N];
    cout << "enter the weight of objects" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    int value[N];
    cout << "enter the value of objects" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int W;
    cout << "Enter the knapsack weight" << endl;
    cin >> W;
    cout << "hence the maximum value that is eligible to store in knapsack is = ";
    cout << knapshap(value, wt, n, W) << endl;
    // 0-1 knapsack problem hai ye and based on dynamic programming
    return 0;
}