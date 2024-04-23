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
    cout << tmp->val <<" ";
    tmp = tmp->next;
  }
  cout<<endl;
}
int main()
{
  Node *head = NULL;

  while (true)

  {
    cout << "Press 1 to insert Node" << endl;
    cout << "Press 2 to Print/See all Nodes" << endl;
    cout << "Press 3 to exit/terminate the program" << endl;

    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Write the value of your node:" << endl;
      int v;
      cin >> v;
      insert_at_tail(head, v);
    }
    else if (op == 2)
    {
      cout << "Your Desire Linked list;" << endl;
      print_linked_list(head);
    }
    else if (op == 3)
    {
      break;
    }
  }

  return 0;
}
