// eek second mai 10^8 operation hote hai 
#include <iostream>

using namespace std;
int main(){
  int n;
  cin>>n;
//   ye next day hai
  int arr[n+1];
//   ye previous day hai
  arr[n]=-1;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  if(n==1){
      cout<<"1"<<endl;
      return 0;
  }
  int ans=0;
  int mx =-1;
  for(int i=0;i<n;i++){
      if(arr[i]>mx && arr[i]>arr[i+1]){
          ans++;
      }
      mx=max(mx,arr[i]);
  }
  cout<<ans<<endl;
  return 0;
}