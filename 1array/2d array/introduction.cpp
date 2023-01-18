#include <iostream>
// jase matrix hote the 12the mai vase hi 2D array hai n*m in which n for row and m for coloum
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    cout<<"enter the value of 2Darray \n";
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<"\n";
    }

    cout<<" enter the value to find for x\n";
    int x;
    cin>>x;
    // cout<<"enter the value to find x";
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==x){
                cout<<i<<" "<<j;
                flag=true;

            }
            // cout << arr[i][j]<<" ";
        }cout<<"\n";
    }
    if(flag){
        cout<<"Element is found \n";
    }
    else{
        cout<<"element is not found";
    }
    return 0;
}