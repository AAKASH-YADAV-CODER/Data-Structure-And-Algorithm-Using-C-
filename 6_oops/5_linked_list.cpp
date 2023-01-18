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
bool searchkey(node* head,int key){//ye search krne k liye
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteHead(node* &head){//head wale element ko delete krne k liye
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletionNode(node* &head,int val){//delete any node in between linkedlist
    if(head==NULL){//ye jab link list mai element hi na ho 
        return;
    }
    if(head->next==head){//ye jab eek hi element ho
        deleteHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    node* head=NULL;
    insertatlast(head,1);
    insertatlast(head,2);
    insertatlast(head,3);
    display(head);
    // insertatfirst(head,4);
    // display(head);
    // cout<<searchkey(head,3)<<endl;
    // deletionNode(head,2);
    // display(head);
    deleteHead(head);
    display(head);
    return 0;
}