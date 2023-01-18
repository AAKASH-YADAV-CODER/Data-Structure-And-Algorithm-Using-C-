// isme hume 2 matric ka multiplacation krni hai tho n1*n2 and n2*n3 ye and n1*n3 joke ans kii form mai niklega viroo
#include <iostream>
using namespace std;
int main(){
  int n,m,o;
  cin>>n>>m>>o;
  cout<<"enter the value of arr\n";
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }
  cout<<" enter the value of second array\n";
  int arr1[m][o];
   for(int i=0;i<m;i++){
    for(int j=0;j<o;j++){
        cin>>arr1[i][j];
        // cout<<arr[i][j]<<"  ";
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        // cin>>arr[i][j];
        cout<<arr[i][j]<<"  ";
    }cout<<"\n";
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<o;j++){
        // cin>>arr[i][j];
        cout<<arr1[i][j]<<"  ";
    }cout<<"\n";
  }
  int ans[n][o];
  for(int i=0;i<n;i++){
    for(int j=0;j<o;j++){
        // cin>>arr[i][j];
        ans[i][j]=0;       
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<o;j++){
        for(int k=0;k<m;k++){
            ans[i][j]+=arr[i][k]*arr1[k][j];
        }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<o;j++)
        cout<<ans[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}