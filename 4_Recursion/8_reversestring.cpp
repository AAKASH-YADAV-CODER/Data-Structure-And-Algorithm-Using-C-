#include <iostream>
using namespace std;
void revers(string s){
    if(s.length()==0){
        return ;
    }
    string ros=(s.substr(1));
    revers(ros);
    cout<<s[0]<<" "<<endl;
}
int main(){
  string s="binod";
  revers(s);
  return 0;
}