#include <iostream>
using namespace std;
string movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=movex(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }else{
        // return (ch+ans);
        return s;//this is correct and uper one 
        // return ans;
    }
}
int main(){
  string s="xxxprhajjrisxhsdxhkxx";
  cout<<movex(s)<<endl;
  return 0;
}