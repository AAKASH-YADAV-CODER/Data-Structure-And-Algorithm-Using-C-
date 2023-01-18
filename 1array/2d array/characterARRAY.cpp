#include <iostream>
using namespace std;
int main(){
//   we know how to declare character array by char data type
// char arr[100];
// cout<<arr[3]<<"  "<<endl;
// and know for taking input 
/*int n;
cin>>n;
cout<<"enter the value of character\n";
char arr[n+1];
cin>>arr[n+1];
// cout<<arr<<endl;
for(int i=0;i<n+1;i++){
    cout<<arr[i];
}*/
// cout<<arr[n]<<" "<<endl;


// cout<<" enter the value of n no. of array\n";
// int n;
// cin>>n;

// char arr[n];
// cin>>arr;
// cout<<arr<<endl;
// cout<<arr[3]<<endl;
// FUNDA OF "\0" KA QUKI JO COMPILAR HAI VO ISKE BINE SOCHTA HAI KI NEXT VARIBLE KO INPUT LAINE HAI THO ISI KI APPLICATION HAI KI "\0" AAEGA TABHI SENTANCE KHATM HOGA LETS CODE
char arr[10]={"banana"};
int i=0;
while(arr[i]!='\0'){
    cout<<arr[i]<<endl;
    i++;
}
  return 0;
}