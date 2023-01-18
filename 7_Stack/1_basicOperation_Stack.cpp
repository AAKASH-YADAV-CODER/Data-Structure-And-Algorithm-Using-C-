#include <iostream>
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    int push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return -1;
        }
        top++;
        return arr[top]=x;
    }
    int pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top--;
    }
    int Top(){
        if(top==-1){
            cout<<" stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    Stack stc;
    stc.push(23);
    stc.push(24);
    stc.push(25);
    cout<<stc.Top()<<endl;
    stc.pop();
    cout<<stc.Top()<<endl;
    stc.pop();
    stc.pop();
    stc.pop();
    cout<<stc.Top()<<endl;
    cout<<stc.empty();
  return 0;
}