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
void insert_at_position(Node *head, int pos, int val) // O(N)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++) // jehetu N size hole size porjonto chole complexity hobe O(N)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    if (head == NULL) // O(1)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;

    cout << endl;
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
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL) // O(N)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node *&head, int val) // O(1)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void reverse_recursion(Node *n) // recursion again & again value funtion e pass kora lage tai head dile main head er value change hobar possiblity thake
{
    // base case
    if (n == NULL)
        return;

    reverse_recursion(n->next);
    cout << n->val << " "; // recursive funtion er system onujai print call er pore dile reverse print hoi.. logic recursive module e dekhano hoyeche
}

int main()
{
    int q=2;
    int sz1=0;
    int sz2=0;
    while (q--)
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
    if(q==1)
     
     {
        sz1=size(head);
     }
     else {sz2=size(head);}
    // print_linked_list(head);
    // for (Node *i = head; i->next != NULL;i= i->next)
    // {
    //     for (Node *j = i->next; j != NULL;j= j->next)
    //     {
    //         if (i->val < j->val)
    //         {
    //             swap(i->val, j->val);
    //         }
    //     }
    // }
    // print_linked_list(head);
    }
    if(sz1==sz2) cout<<"YES";
    else cout<<"NO";

}


    