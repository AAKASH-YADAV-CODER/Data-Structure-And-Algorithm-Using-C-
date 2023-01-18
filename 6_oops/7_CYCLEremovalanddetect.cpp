#include <iostream>
using namespace std;
// Floyd's algo and hare & tortoise algo with use of this we find out cycle in linkedlist
class node
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
void insertattail(node* &head, int val)
{
  node* n = new node(val);
  if (head == NULL )
  {
    head=n;
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
{
  node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULLL" << endl;
}
void makecycle(node* &head, int pos){
  node* temp=head;
  node* startnode;
  int count=1;
  while(temp->next!=NULL){
    if(pos==count){
      startnode=temp;
    }
    temp=temp->next;
    count++;

  }
  temp->next=startnode;
}
bool checkcycle(node* &head){
  node* fast=head;
  node* slow=head;
  while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow){
      return true;
    }
  }
  return false;
}
void removecycle(node* &head){
  node* fast=head;
  node* slow=head;
  do{
    fast=fast->next->next;
    slow=slow->next;
  }while(fast!=slow);
  
  
  fast=head;
  while(fast->next!=slow->next){
    fast=fast->next;
    slow=slow->next;
  }
  slow->next=NULL;
}
int main()
{
  node* head = NULL;
  insertattail(head, 1);
  insertattail(head, 2);
  insertattail(head, 3);
  insertattail(head, 4);
  insertattail(head, 5);
  insertattail(head, 6);
  // insertattail(head, 7);
  display(head);
  makecycle(head,3);
  // display(head); 
  cout<<checkcycle(head)<<endl;
  // display(head); 
  removecycle(head);
  cout<<checkcycle(head)<<endl;
  display(head);
  return 0;
}