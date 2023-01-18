#include <iostream>
using namespace std;
int main()
{
// largest word nikalna hai so space se phele wal word check krna padega so hume currentlength and anslength ko compare kna padega so lets do it AND MAIN THINK IS THAT HUME PURA BOLCK OF LINE DAINE KE IYE cin.getline(); fuction ka use krna padega and puri line ko flase krne k liye cin.ignore(); ka use krna padega
    //   largest word
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    //    cin>>arr;
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currlen = 0, maxlen = 0;
    int st=0, mxst=0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                mxst=st;
            }
            currlen = 0;
            st=i+1;
        }
        else
        {
            currlen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << endl;
    for(int i=0;i<maxlen;i++)
        cout<<arr[i+mxst]<<endl;
    return 0;
}