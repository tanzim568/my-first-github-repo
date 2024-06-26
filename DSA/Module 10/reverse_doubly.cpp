#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

void print_linked_list(Node* head)
{
    Node *tmp = head;

    while(tmp!=NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
// void print_backwards(Node* tail)
// {
//     Node *tmp = tail;
//     while(tmp!=NULL)
//     {
//         cout << tmp->val << endl;
//         tmp = tmp->prev;
//     }
// }

void reverse(Node*head,Node* tail)
{
    Node *i = head;
    Node *j = tail;

    while(i!=j && i->next!=j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev; 
    }
     swap(i->val, j->val);  //bug fixed
}





int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // print_linked_list(head);
    // cout << endl;
    // print_backwards(tail);
    // cout << endl;
    reverse(head, tail);
   print_linked_list(head);
    return 0;
}





