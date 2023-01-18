#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void inseratfirst(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
    
}
void inseratlast(node* &head,int val){

    node* n=new node (val);
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
// node* reverselist(node* head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }//This by normal way 
// node* reverseRecursive(node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* newhead=reverseRecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }//This is by recursive method
node* reversek(node* &head,int k){
    int count=0;
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
    }
    return prevptr;
}
int main(){
    node* head=NULL;
    inseratlast(head,2);
    inseratlast(head,3);
    inseratlast(head,4);
    inseratfirst(head,1);
    display(head);
    // node* newhead=reverselist(head);
    // display(newhead);
    // node* newhead=reverseRecursive(head);
    // display(newhead);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
  return 0;
}