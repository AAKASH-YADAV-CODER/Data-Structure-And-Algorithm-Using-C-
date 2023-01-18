#include <iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    // this is for increasing isme cout se phele print krna hai quki recursion mai phele function call hota hai then return hoti hai value 
    // dec(n-1);
    cout<<n<<endl;
    // this is for decreasing 
    dec(n-1);
    
}
int main(){
  int n;
  cin>>n;
  dec(n);
  return 0;
}