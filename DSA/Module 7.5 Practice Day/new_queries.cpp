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

void insert_at_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
    // tmp last node e thaka kale ei loop break hobe // suppose last er node er address 5d ekhon ei loop e 5d->next = NULL tai loop e dukbe na,but tmp er value 5d ba last node er address e thkbe ar onno loop tmp!=NULL eitay tmp=5d so tmp!=NULL tai loop e dukbe last tmp=tmp->next ba 5d->next=NULL or NULL=5d->next so tmp er value ekhon NULL
  }
  tmp->next = newNode;
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

void insert_head(Node *&head, int val) // O(1)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_any_pos(Node *head, int pos)

{
  Node *tmp = head;


  for (int i = 1; i < pos; i++)
  {
    tmp = tmp->next;
  }
  Node *deletenode = tmp->next;
  tmp->next = tmp->next->next;
  delete deletenode;
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

void delete_from_head(Node *&head)
{
  //  Node* tmp=head;
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
}


int main()
{
   
    Node *head = NULL;
    Node *tail = NULL;
  
    int q;
    cin>>q;
    while(q--)
    {
        int op;
        int v;
        cin>>op>>v;
        if(op==0)
        {
            insert_head(head,v);
        }
        else if(op==1)
        {
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            if(v>=size(head))
            {
                // continue;
            }else if(v==0)
            {
                delete_from_head(head);
            }
            else
              delete_any_pos(head,v);      
        }

        print_linked_list(head);

    }
    
    // while (1)
    // {
    //     cin >> val;
    //     if (val == -1)
    //         break;
    //     insert_tail(head, tail, val);
    // }

}





    


    