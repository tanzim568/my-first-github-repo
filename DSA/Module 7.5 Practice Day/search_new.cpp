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
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
void search(Node *head, int x)
{

    Node *tmp = head;
    bool flag = false;
    int pos = 0;
    int nf=-1;

    while (tmp != NULL)
    {
       
        if (x == tmp->val)
        {

            flag = true;
            break;
         }
       pos++;
       tmp=tmp->next;
        
    }
   
   if(flag==true) cout<<pos<<endl;
   else cout<<-1<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)

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

        int x;
        cin >> x;
        search(head, x);
    }
}
