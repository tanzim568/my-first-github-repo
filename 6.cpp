#include<bits/stdc++.h>
using namespace std;
class node
{
 public:
 int val;
 node *next;
 node(int val)
 {
    this->val=val;
    this->next=NULL;
 }
};
void Insert_at_tail(node&head,int val)
{
   cout<<"Enter value:";
   int val;
   cin>>val;
   node newnode=new node(val);
   if(head==NULL)
   {
    head=newnode;
    cout<<"Inserted at head"<<endl<<endl;
   }
   else
   {
    nodetemp=head;
    while (temp!=NULL)
    {
      temp=temp->next;
    }
    temp=newnode;
    cout<<"Inserted at tail"<<endl<<endl;

   }
}
void print_linked_list(node head)
{
  cout<<"Your linkedlist:"<<endl;
  nodetemp=head;
  if(temp==NULL)
 {
    cout<<"Empty linkedlist"<<endl;
 }
 else
 {

    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
       // cout<<temp->next<<endl;
        temp=temp->next;
    }
}
}
int main()
{
    node *head=NULL;
    while (true)
    {

    cout<<"op-1:Insert at tail"<<endl;
    cout<<"op-2:Print linked list"<<endl;
    cout<<"op-3:Insert at tail"<<endl;
    cout<<"op-4:Terminate"<<endl;

    cout<<"Enter option:"<<endl;

    int op;
    cin>>op;

    if (op==1)
    {
      cout<<"Enter value:";
      int val;
      cin>>val;
      Insert_at_tail(head,val);
    } 
    else if(op==2)
    {
      print_linked_list(head);
    } 
    } 
    return 0;
}