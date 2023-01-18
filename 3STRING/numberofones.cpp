#include <iostream>
using namespace std;
int numofones(int n){
    int counter =0;
    while (n)
    {
        n=n & (n-1);
        counter++;
    }
    return counter;
    
}
int main(){
  cout<<numofones(19)<<endl;
  return 0;
}