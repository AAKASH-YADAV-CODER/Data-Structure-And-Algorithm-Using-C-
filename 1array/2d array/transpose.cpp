#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
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
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        // cin>>arr[i][j];
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        cout<<arr[i][j]<<" ";
    }cout<<"\n";
  }
  return 0;
}