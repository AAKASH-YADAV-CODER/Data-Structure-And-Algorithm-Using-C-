#include <iostream>
using namespace std;
class node//ye eek node lo struct krne ke liye
{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertatfirst(node* &head,int val){//ye insert at first pe krne k liye 
    node* n=new node(val);
    // node* n=head;
    // while(n->next==head){
    n->next=head;
    head=n;
    // }
}
void insertatlast(node* &head,int val){//ye last mai add krne k liye
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){//its to print all data of link list 
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void evenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* starteven=even;
    while(even->next!=NULL && odd->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=starteven;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}
int main(){
  node* head=NULL;
  int  arr[]={1,2,3,4,5,6};
  for(int i=0;i<6;i++){
    insertatlast(head,arr[i]);
  }
  display(head);
  evenAfterOdd(head);
  display(head);
  return 0;
}