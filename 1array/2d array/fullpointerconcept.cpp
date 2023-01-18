#include <iostream>
using namespace std;
int main()
{
    //   basically pointer use hota hai access karne k liye and orginal value ko update bhi kar sakte hai
    // int f = 10;
    // int *fptr = &f;
    // cout << *fptr << endl;
    // *fptr=1000000;
    // cout<<*fptr<<endl;
    // as we seen we access and update the value of and variable
    // arithmetic operator basically there are four operator(++,--,+,-)let get code
    /*int a = 10;
    int *aptr = &a;
    cout << aptr << endl;
    aptr++;
    cout << aptr << endl;*/

    // pointer in array
    /*int a[] = {1, 2, 4, 5};
    cout << *a << endl;
    int *aptr = a;
    for (int i = 0; i < 4; i++)*/
    /*{
        cout << *aptr << endl;
        aptr++;
        // and another way
        cout<<*(a+i)<<endl;
    }*/
    // pointer to pointer
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<ptr<<endl;
    cout<<**pptr<<endl;
    return 0;
}