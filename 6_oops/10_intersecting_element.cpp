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
int length(node* head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l2-l1;
        ptr1=head1;
        ptr2=head2;
    }else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
void intersect(node* &head1,node*  &head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int main(){
  node* head1=NULL;
  node* head2=NULL;
  insertatlast(head1,1);
  insertatlast(head1,2);
  insertatlast(head1,3);
  insertatlast(head1,4);
  insertatlast(head1,5);
  insertatlast(head1,6);
  insertatlast(head2,9);
  insertatlast(head2,10);
  intersect(head1,head2,3);
  display(head1);
  display(head2);
  cout<<intersection(head1,head2)<<endl;
  return 0;
}