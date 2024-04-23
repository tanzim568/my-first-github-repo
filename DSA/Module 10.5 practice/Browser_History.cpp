#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;
    Node* prev;

    Node (string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_address(Node* &head,Node* &tail, string val)   
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void print(Node* head)
{
   Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
  
    cout << endl;
}
// void visit()
// {

// }
// void next()
// {

// }
// void prev()
// {

// }
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while(1)
    {
        cin >> val;
        if(val=="end")  break;
        insert_address(head, tail, val);
    }
    print(head);
    // int t;
    // cin >> t;
    // string cmd;
    // while(t--)
    // {
    //     cin >> cmd;
    //     if(cmd=="visit")
    //     {
    //         visit()
    //     }
    //     else if(cmd=="next")
    //     {
    //         next()
    //     }
    //     else 
    //       {
    //           prev();
    //       }
    // }

    return 0;
}
