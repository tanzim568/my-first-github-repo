#include <bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* next;

   Node(int val)
   {
      this->val=val;
      this->next=NULL;
   }
};
void insert_at_position(Node*head,int pos,int val) //O(N)
{
    Node *newNode=new Node(val);
    Node* tmp=head;

    for (int i=1;i<=pos-1;i++)  //jehetu N size hole size porjonto chole complexity hobe O(N)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;

}

void insert_tail(Node*&head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    
    Node *tmp=head;
    if(head==NULL)  // O(1)
    {
        head=newNode;
        tail=newNode;
    }

    tail->next=newNode;
    tail=newNode;
   
    cout<<endl;
}
void print_linked_list(Node * head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";   //O(N)
        tmp=tmp->next;
    }
    cout<<endl;

}
int  size(Node* head)
{
    Node*tmp=head;
    int cnt=0;
    while (tmp!=NULL)  //O(N)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;

}
void insert_head(Node* &head,int val)   //O(1)
{
    Node* newNode=new Node (val);
    newNode->next=head;
    head=newNode;

    
}

int main ()
{
  Node* head=new Node(10);
  Node* a=new Node (20);
  Node* b=new Node (30);
  Node* c=new Node (30);
  Node* d=new Node(40);
  Node* tail=d;
  

  head->next=a;
  a->next=b;
  b->next=c; 
  c->next=d;

  print_linked_list(head);
  cout<<"Tail -> :"<<tail->val<<endl<<endl;

  int val,pos;
  cout<<"Enter value :";
  cin>>val;
  cout<<"Enter Index/Position + 1 :";
  cin>>pos;

  if(pos>size(head))
  {
    cout<<"Invalid Index"<<endl;  // O(1)
  }
  else if(pos==0)
  {
    insert_head(head,val);
  }
  else if(pos==size(head))
  {
    insert_tail(head,tail,val);
    // complexity on previous loop input in module 6 will take O(N) So to insert N values at tail the complexity will be N * O(N)= O(N*N)  
      // complexity of insert tail.jpg  <-- go to this file in this folder or module 7 - 6 details video
   
  }

  else 
  insert_at_position(head,pos,val);  //O(N)
 


//   insert_tail(head,val);
  print_linked_list(head);
  cout<<"Tail Now -> "<<tail->val<<endl;
  cout<<tail->next;
//   cout<<"List size : "<<size(head)<<endl;
   

return 0;
}
