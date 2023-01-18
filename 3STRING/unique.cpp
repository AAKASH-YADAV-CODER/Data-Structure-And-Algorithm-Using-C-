#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++)
        xorsum=xorsum^arr[i];
    return xorsum;
    // Xor is like 00=0,11=1,01=1,10=1 so agar humee unique find out krna hai tho xor kr do between element
}
int main(){
  int arr[7]={1,2,3,4,3,2,1};
  cout<<unique(arr,7)<<endl;
  return 0;
}