#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data= val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtfirst(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertAttail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        insertAtfirst(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
    n->prev=temp;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void deletionhead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deleteion(node* &head,int pos){
    if(pos==1){
        deletionhead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp->next!=NULL && count!=pos){
        temp=temp->next;
        count ++ ;
    }
    if(temp->next!=NULL){
    temp->prev->next=temp->next;
    }
    temp->next->prev=temp->prev;
    delete temp;
}
int main(){
  node* head=NULL;
  insertAttail(head,2); 
  insertAttail(head,3); 
  insertAttail(head,4); 
  insertAttail(head,5);
  insertAtfirst(head,1);
  display(head); 
  deleteion(head,1);
  display(head);
  return 0;
}