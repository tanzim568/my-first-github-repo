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
void insert_at_tail(Node *&head, int v) // jehetu head ekta class er object tail sei class mention kore head call krte hbe or we can say return_type funciton_name(data_type var_name) ar class object data type r variable er ney kaj kore
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        // evabe tmp te ekhon last node er address ache
    }
    tmp->next = newNode;

    cout << "Node Inserted Successfully" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_at_any_pos(Node *head, int ind, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        cout << "No heads found" << endl;
             return;
    }
    Node *tmp = head;
    for (int i = 1; i < ind; i++)
    {
        tmp = tmp->next;
        
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    } 
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at Pos: " << ind + 1<<" Val: "<<val << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    newNode->next = head;
    head = newNode;

    cout << "Inserted at head" << endl;
}
void delete_any_pos(Node *head, int pos)

{
    if (head == NULL)
    {
        cout << "Invalid index , No head found" << endl;
        return;
    }
    Node *tmp = head;

    for (int i = 1; i < pos+1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }

    Node *deletenode = tmp->next;
    if (tmp->next == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    tmp->next = tmp->next->next;
    delete deletenode;

    cout << "Node Deleted Successfully" << endl;
}

void delete_from_head(Node *&head)
{
   
    if (head == NULL)
    {
        cout << "Invalid index , No head found" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    cout << "Head deleted successfully" << endl;
}
int main()
{
    Node *head = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    
  
    int q;
    cin>>q;
    while(q--)
    {

        cout<<q;
        int ind, val;
        cin >> ind >> val;

        // insert_at_any_pos(head,ind,val);
        if (ind == 0)
        {
            insert_at_head(head, val);
        }
        else
        {
            insert_at_any_pos(head, ind, val);
        }
        print_linked_list(head);
        if (q==7) break;
    }

    return 0;
}
