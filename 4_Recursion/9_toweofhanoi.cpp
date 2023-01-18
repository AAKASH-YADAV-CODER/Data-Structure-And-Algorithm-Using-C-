#include <iostream>
using namespace std;
void towerofhanoi(int n,char srce,char dest,char helper){
    if(n==0){
        return ;
    }
    towerofhanoi(n-1,srce,helper,dest);
    cout<<"move from "<<srce<<"to"<<dest<<endl;
    towerofhanoi(n-1,helper,srce,dest);

}
int main(){
  towerofhanoi(3,'A','B','C');
  return 0;
}