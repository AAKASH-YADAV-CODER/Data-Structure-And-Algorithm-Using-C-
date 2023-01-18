// its work on sorted search only
#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int target;
  cout<<" enter the value of target\n";
  cin>>target;
  cout<<"enter the value of arr\n";
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        // cin>>arr[i][j];
        cout<<arr[i][j]<<"  ";
    }cout<<"\n";
  }
  bool flage=false;
  int r=0, c=m-1;
   while( r<n && c>=0){
    if(arr[r][c]==target){
        flage=true;
    }
    if(arr[r][c]>target){
        c--;
    }
    else{
        r++;
    }
   }
   if(flage){
    cout<<"element found\n";
   }else{
    cout<<" element not found\n";
   }
  

  return 0;
}