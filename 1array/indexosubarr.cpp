// this problem on ki humee nikalna hai index of subarr jika sum given hoga arr mai starting and ending index nikana hai
#include <iostream>
using namespace std;
int main(){
  int n,s;
  cout<<"enter the value of n no. of arr an sub arry sum \n";
  cin>>n>>s;
  cout<<"enter the value of array ";
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int i=0,j=0,st=-1,ed=-1,sum=0;
  while(j<n && sum+arr[j]<=s){
      sum+=arr[j];
      j++;

  }
  while(j<n){
      sum+=arr[j];
      while(sum > s){
          sum-=arr[i];
          i++;
      }
      if(sum==s){
          st=i+1;
          ed=j+1;
          break;
      }
      j++;
  }
  cout<< st <<" "<<ed<<endl;
  return 0;
}