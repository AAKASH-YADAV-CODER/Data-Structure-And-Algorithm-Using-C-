#include <iostream>
using namespace std;
void subset( int arr[], int n){
    for(int i=0;i< (1<<n);i++){
            for(int j=0;j<n;j++){
                if( i & (1<<j)){
                    cout<<arr[j]<<" ";
                }
            }cout<<endl;
    }
    // return  ;
}
int main(){
  int arr[4]={1,2,3,4};
  subset(arr,4);
//   cout<<subset(arr,4)<<endl;
// isme hum phele arr and uska size declare kr rhai hai then iloop se 2power of n subset bta rhe hai and useke baad j loop se element compare krke arr se print kr rhai hai one by one
  return 0;
}