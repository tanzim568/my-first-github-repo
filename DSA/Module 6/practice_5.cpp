#include <bits/stdc++.h>
using namespace std;
bool flag= false;
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
    }
    tmp->next = newNode;

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

void sort_check(Node*head,int size)
{
    Node*tmp=head;

    for (int i=0;i<size-1;i++)
    {

         
        // cout<<tmp->val<<endl<<tmp->next->val;
        // cout<<"sorted chekced function"<<endl;
        if(tmp->val>tmp->next->val) 
        {
            flag=true;
            break;
        }
        tmp=tmp->next;
     }
//   cout<<"sorted chekced function";
}
int main()
{
    Node *head = NULL;
    int size=0;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
            size++;
            insert_at_tail(head,val);

    }
    // print_linked_list(head);
    // cout<<size;
    
    sort_check(head,size);
    (flag==true)?cout<<"NO"<<endl:cout<<"YES";


    return 0;
}
