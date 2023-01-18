// sub arr print krna hai jaski pata hai contigouse hote hai lets take ex
// {-1,4,7,2} {[-1] -1 4] -1 4 7 -1 4 7 2
/*4
4 7
4 7 2
7 
7 2
2*/
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          for(int k=i;k<=j;k++){
              cout<<arr[k];
          }cout<<endl;
      }
  }
  return 0;
}
