#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node *prev;

    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev = NULL;
    }

};



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


void reverse_recursion(Node* n)  
{
   //base case
   if(n==NULL) return;
 
   reverse_recursion(n->next);
     cout<<n->val<<" "; 


}

void reverse(Node* &head,Node *n)
{
    //base case
    if(n->next==NULL)
    {
        head = n;
        return;
    }
    reverse(head, n->next);
    n->next->next = n;
    n->next = NULL;
}


int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head,head);
    print_linked_list(head);

    return 0;
}
