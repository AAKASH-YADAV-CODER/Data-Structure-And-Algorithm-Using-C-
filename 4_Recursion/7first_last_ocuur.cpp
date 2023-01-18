#include <iostream>
using namespace std;
int firstoccu(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccu(arr,n,i+1,key);
}
int lastoccur(int arr[],int n,int i,int key){

    if(i==n){
        return -1;
    }
    int restarr=lastoccur(arr,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
  int arr[]={1,2,3,4,5,4,3,2,1};
  cout<<firstoccu(arr,9,0,2)<<endl;
  cout<<lastoccur(arr,9,0,2)<<endl;
  return 0;
}