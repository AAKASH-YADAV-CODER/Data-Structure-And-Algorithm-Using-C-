// this principle base upon waste do something so isme a1+a2-a3 where a3commmon hai dona mai eek tarika and second tarika and common tarika jo minus hoga
#include <iostream>
using namespace std;
int divisible(int a,int b,int n){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  cout<<divisible(a,b,n)<<" ";
  return 0;
}