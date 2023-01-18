#include <iostream>
using namespace std;
class softwareengineer
{
    string name;
    public:
    int age;
    void printinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
    softwareengineer(string s,int a){
        cout<<"paratmeterised constructor"<<endl;
        name = s;
        age = a;
    }//parameterized constructor 
    // void setname(string s){
    //     name=s;
    // }
    softwareengineer(){
        cout<<"default constructor"<<endl;
    }//default constructor
    softwareengineer(softwareengineer &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
    }
    void getName(){
        cout<<name<<endl;
        // cout<<age<<endl;
    }
    ~softwareengineer(){
        cout<<"destructor called"<<endl;
    }
    bool operator==(softwareengineer &a){
        if(name==a.name && age==a.age){
            return true;
        }
        return false;
    }
};
int main()
{
    /*softwareengineer a;
    a.name="aakash yadav";
    a.age=18;
    softwareengineer b;
    b.name="nothin";
    b.age=18;//like mai isme bhoot sare object bna skta hu but isse assan trika iska arr bnana
    softwareengineer arr[3];
    for(int i=0;i<3;i++){
        cout<<"name=";
        // cin>>arr[i].name;
        string s;
        cin>>s;
        arr[i].setname(s);//ye wal function private data member ko access krne k liye hai set and get
        cout<<"age=";
        cin>>arr[i].age;
        // cout<<"name=";
    } 
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }*/
    softwareengineer a("aakash",18);
    // a.getName();
    // a.printinfo();
    softwareengineer b;
    softwareengineer c(a);//copy constuctor
    if(b==c){
        cout<<"same"<<endl;
    }else{
        cout<<"not same"<<endl;
    }
    return 0;
}