#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    if (head == NULL) // O(1)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " "; // O(N)
        tmp = tmp->next;
    }
    cout << endl;
}

void remove_duplicate(Node *&head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {

            //  if(i->val==j->next->val)
            if (j->next->val == i->val)
            {
                Node *delNode = j->next;
                j->next = j->next->next;
                delete delNode;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

// void delete_n(Node* &head,int v)
// {
//    Node *tmp2=head;

//      while(tmp2->next!=NULL)
//      {
//         if(tmp2->next->val==v)
//         {
//             Node* delNode=tmp2->next;
//             tmp2->next=tmp2->next->next;
//             delete delNode;
//         }
//         else
//         {
//             tmp2=tmp2->next;
//         }
//      }
// }
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    remove_duplicate(head);
    //    Node *tmp=head;

    //    while(tmp!=NULL)
    //    {
    //         delete_n(tmp,tmp->val);
    //         tmp=tmp->next;
    //    }

    print_linked_list(head);
}