#include <iostream>
using namespace std;
int gcdfactor(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
//   greatest common differance its an difference like agar hum koi bhi do number ko differance ya minus krte hai tho usk gcd same hotta hai 
   int a,b;
   cin>>a>>b;
   cout<<gcdfactor(a,b)<<" ";
  return 0;
}