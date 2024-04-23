#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
 

    Node (int val)
    {
        this->val=val;
        this->next=NULL;

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
    // newNode->prev = tail;
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

    // list<int> mylist(head);
    

    print_linked_list_forward(head);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> myList;
//     int val;
//     while(true)
//     {
//         cin >> val;
//         if(val==-1) break;
//         myList.push_back(val);
//     }
//     myList.sort();
//     myList.unique();
//     for(int val: myList)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

