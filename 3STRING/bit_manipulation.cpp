#include <iostream>
using namespace std;
int getbit(int n, int i){
    return (n & (1<<i))!=0;
    // agar hum bracket()lagana bhoot jaruri hai   quki error aa sakta hai due to precedance of operator
}
int setbit(int n , int i){
    return (n | (1<<i));
    // isme or use kiya hai quki 10=1 , 01=1,11=1,00=0 krta hai OR operator
}
int clearbit(int n, int i){
    return (n & ~(1<<i));
}
// isme hum one compliment kr rhai hai like 0011 will be 1100 is ans and &ka usekrke
int updatebit(int n,int i , int value){
    // isme phele clear bit use kr rhe hai and then get bit and then set bit use kr rhai hai pr dekha jaye tho isme setbit hi chal rha hai
    int mask = ~(1<<i);
    n=(n & mask);
    return (n | (value<<i));
}
int main()
{
    // cout<<getbit(5,4)<<endl;
    // so is function ka use karke ye dikhaya hai ki 1 0 = 0 , 01=0,11=1,00=0 hota hai & ya and operator ka use karke thats it get bit ka matlab 0 lagana
    // cout<<setbit(5,3)<<endl;
    // left shift operator hota hai second operand hai usko2* mul. krna or is simple way jis number se position shift krni hai utne hi position left shift kr do original operand se
    // cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
    return 0;
}