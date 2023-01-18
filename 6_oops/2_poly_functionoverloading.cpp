#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "this is function without data type" << endl;
    }
    void fun(int x)
    {
        cout << "this is function with int data type" << x<<endl;
    }
    void fun(double y)
    {
        cout << "this is function with double type" <<y<< endl;
    }
};
int main()
{
    A obj;
    obj.fun();
    obj.fun(3);
    obj.fun(6.7);
    return 0;
}