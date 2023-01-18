#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  /*for(int i=1;i<n;i++){
      for(int j=0;j<n-i;j++){
          if(arr[j]>arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }*/ 
//   BOTH THE METHOD ARE CORRECT! AND UPPER ONE IS MY LOGIC AND DOWN ONE IS OF APNA COLLAGE
  int i=1;
  while(i<n){
      
      for(int j=0;j<n-i;j++){
          if(arr[j]>arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
      i++;
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}