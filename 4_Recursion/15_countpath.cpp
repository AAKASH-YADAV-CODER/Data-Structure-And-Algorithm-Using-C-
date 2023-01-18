#include <iostream>
using namespace std;
int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int counter=0;
    for(int i=1;i<=6;i++){
        counter+=countpath(s+i,e);
    }
    return counter;
}
int main(){
  cout<<countpath(1,6)<<endl;
  return 0;
}