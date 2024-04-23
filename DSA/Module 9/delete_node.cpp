#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_linked_list_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
    // newNode=head;
}

void insert_at_pos(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1 /*3-1*/; i++) // sob index diyei count hobe ekhon tmp ache 2 index e
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;

    // newNode->prev=tmp;
    // newNode->next=tmp->next;
    // newNode->next->prev=newNode;
    // tmp->next=newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);

    newNode->prev = tail;
    tail->next = newNode;

    tail = newNode;
}

void print_linked_list_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_tail(Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    tail->next = NULL;
}

void delete_head(Node* &head)
{
    Node* delNode=head;
    head=head->next;
    delete delNode;
    head->prev=NULL;
}
int size(Node* head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        
        tmp=tmp->next;
        cnt++;
    }
    return cnt;
}
int main()
{ // manually set values for test
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // connections
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    // function test section here
    //  insert_at_pos(head, 5, 200);
    //  insert_at_head(head,70);
    //  insert_at_tail(tail, 105);

    // delete_tail(tail);
    // delete_head(head);


    // cout<<size(head)<<endl;

    int val,pos;
    cin>>pos>>val;

    if(pos>=size(head))
    {
        cout<<"Invalid"<<endl;      

    }
   else if(pos==0)
   {
     insert_at_head(head,val);

   }
   else if(pos==size(head)-1)
   {
    insert_at_tail(tail,val);
   }
   else
   {
    insert_at_pos(head,pos,val);
   }
    print_linked_list_forward(head);
    print_linked_list_backward(tail);
    return 0;
}
