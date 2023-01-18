// // isme hum jo bhi subarr ka sum max hoga usko print krenge
// #include <iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   int maxsum=INT_MIN;
//   for(int i=0;i<n;i++){
//       for(int j=i;j<n;j++){
//           int sum=0;
//           for(int k=i;k<=j;k++){
//               sum+=arr[k];
//             //   cout<<arr[k];THIS IS DONE IN O[N^3] WHICH IS VERY BAD ALGO BECAUSE OF LARGE TIME CONSUME
//           }
//         //   cout<<endl;
//       maxsum=max(maxsum,sum);
//       }
//   }
//   cout<<maxsum<<endl;
//   return 0;
// }
// alternate of above senario its work in O[n]times mai mechanism is that jo bhi negative no. hoga array mai usko zero se update ke denge
// kadane's algorithm
