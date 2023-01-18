#include <iostream>
using namespace std;
class A{
public:
    virtual void fun(){
        cout<<"this is of class A function"<<endl;
    }
};
class B: public A{
public:
    void fun(){
        cout<<"this is of class B function "<<endl;
    }
};
int main(){
//   A obj;
//   obj.fun();
//   return 0;
    A *aptr;
    B obj;
    aptr = &obj;
    aptr -> fun();
}