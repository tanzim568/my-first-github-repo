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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);   //ekhane newnode ke ekta dynamic object er address carry korche means je new je value asche oita amra heap memory te rekhe tar address newnode pointer variable e store kore rekechei ar oi heap memory te new value pass kore diyechi and by default oi memory je Node class/group create hoeche sekhane ekta value(amader input e deya value) ar NULL (next pointer variable )
    if (head == NULL)              // jodi list e kono node na thake then head e newnode er value(Node(v) dynamic memory er address ) diye deya hobe 
    {
        head = newNode;
        return;                  // jehetu head newnode hoye geche means ar kno node nei list e 1 tai node tai return kore dite hbe na hole ei head loop er pore aro kaj korbe
    }

    Node *tmp = head;            
    while (tmp->next != NULL)       
    // ei loop ti last node e giye thambe dhorlam last node er address 5C .. then 5C->next==NULL tokhon ar loop e dukbe na and tmp er value(pointer er value mane address next node er ) tokhon 5c mane last er address hobe
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e  // tmp pointer e ekhon last node er address ache but last node er next pointer e NULL peye se ar loop e duke ni ..
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
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
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}