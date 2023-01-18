#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    //   so isme hum seekne wale hai 2 concept that is call by referance and call by value , call by value give just local value not original but call by referance we get originall value by pointer so lets code
    int a = 10;
    int b = 20;
    // This by call by value
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;
    // know by referance
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}