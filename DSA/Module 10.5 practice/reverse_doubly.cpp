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
void insert_at_tail(Node* &head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
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
bool palindrome(Node*head,Node*tail)
{
     Node *i = head;
     Node *j = tail;
     bool flag = false;

     while (i != j && i->next != j)
     {
         if (i->val != j->val)
             
         {
             // cout << "NO";
             flag = true;
             break;
         }
         i = i->next;
         j = j->prev;
    }
    // if (i->val != j->val)
    //          ;
    //      {
    //          // cout << "NO";
    //          flag = true;
    //      }
    return flag;
    // swap(i->val, j->val);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
      int val;
    while(1)
    {
      
        cin >> val;
        if(val==-1)
            break;
        insert_at_tail(head, tail, val);
    }

    // if(palindrome(head,tail)==true)
    // {    cout << "NO" << endl;}
    //     else if(palindrome(head,tail)==false)
    //        { cout << "YES";}

    print_linked_list_forward(head);
    return 0;
}
