// smallest positive missing no. in array ko find out kerna hai top mnc  mai pucha gaya hai
// isma humne phele non negative criteria bnaya 13 pe and then iski time comp big o of n ya nlog n laini padegi quki constrain mai value exceed nahi kr sakte
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  cout<<"enter the value of array\n";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  const int N= 1e6+2;
  bool check[N];
  for(int i=0;i<N;i++){
      check[i]=false;
  }
  for(int i=0;i<n;i++){
      if(arr[i]>=0){
      check[arr[i]]=true;
      }
  }  
  int ans;
  for(int i=1;i<n;i++){
      if(check[i]==false){
          ans=i;
          break;
      }
  }
  cout<<ans<<" ";
  return 0;
}