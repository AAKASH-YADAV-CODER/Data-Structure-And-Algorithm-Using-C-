#include <iostream>
using namespace std;
class node // ye eek node lo struct krne ke liye
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertatlast(node* &head, int val)
{ // ye last mai add krne k liye
    node* n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head)
{ // its to print all data of link list
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node* marge(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* resultlist=new node(-1);
    node* p3=resultlist;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{//or we use another if
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p1=p1->next;
        p3=p3->next;
    }
    return resultlist;
}
node* margerecursive(node* &head1,node* &head2){//bestway to marge two linked list 
    if(head1==NULL){
        return head2;
    }if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=margerecursive(head1->next,head2);
    }else{
        result=head2;
        result->next=margerecursive(head1,head2->next);
    }
    return result;
}
int main(){
  node* head1=NULL;
  node* head2=NULL;
  int arr1[]={1,4,5,7};
  int arr2[]={2,3,6};
  for(int i=0;i<4;i++){
    insertatlast(head1,arr1[i]);
  }
  for(int i=0;i<3;i++){
    insertatlast(head2,arr2[i]);
  }
  display(head1);
  display(head2);
  node* newhead=margerecursive(head1,head2);
  display(newhead);
  return 0;
}