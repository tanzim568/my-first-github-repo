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
  cout << endl
       << "Node Inserted Successfully✅" << endl;
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

void insert_at_any_pos(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *tmp = head;
  for (int i = 1; i < pos; i++)
  {
    tmp = tmp->next;
    // tmp ekhon je newNode insert korbo oi pos er ager Node e ache.pos joto tmp o toto number node e ... ar pos joto tar porer node e inset hobe ..linked list er sthe array index er kono connection nei...
    // joto node insert kora hoeche ba ekhon ei muhurte joto gulo node amr list e ache total node theke ami loop ek ghor beshi chalale tmp null hoye jay
  }
  newNode->next = tmp->next; // first e tmp->next er value newNode->next e diye dibo , newNode->next e amra jani by default NULL value opor tmp->next er value(address) bosbe NULL haray jabe jate amder problm nai but tmp->next first e newNode er address rakte gele pos er porer address ja tmp->next e chilo seta haray jabe ja pore r khuje pawa jabe na tai first tmp->next value newNode->next er diye pos er porer value newNode er sthe connect kore pore newNode er address pos er age ba tmp->next e diye node insert krte hbe
  tmp->next = newNode;
  cout << endl;
  //  << "Inserted at Pos: " << val << endl;
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
  Node *tmp = head;

  for (int i = 1; i < pos; i++)
  {
    tmp = tmp->next;
  }
  Node *deletenode = tmp->next;
  tmp->next = tmp->next->next;
  delete deletenode;
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
  while (true)

  {
    cout << "Press 1 to insert Node" << endl;
    cout << "Press 2 to Print/See all Nodes" << endl;
    cout << "Press 3 to to insert Node in any postion"
         << endl;
    cout << "Press 4 to insert at head" << endl;
    cout << "Press 5 to  delete any pos in linked list" << endl;
    cout << "Press 6 to delete from head" << endl;
    cout << "Press 7 to exit" << endl;

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
      int val, pos;
      cout << "Enter Your val:";

      cin >> val;
      cout << "Enter position:";
      cin >> pos;

      insert_at_any_pos(head, pos, val);
    }
    else if (op == 4)

    {
      int val;
      cin >> val;
      insert_at_head(head, val);
    }
    else if (op == 5)
    {
      int pos;
      cin >> pos;
      if (pos == 0)
      {
        delete_from_head(head);
      }
      else
      {
        delete_any_pos(head, pos);
      }
    }
    else if (op == 6)
    {
      delete_from_head(head);
    }
    else
      break;
  }

  return 0;
}
