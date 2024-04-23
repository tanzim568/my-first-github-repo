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
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++) 
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

void middle_print(Node *head)
{
    Node *tmp = head;
    if (size(head) % 2 == 0)
    {
        for (int i = 1; i < size(head) / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val;
    }
    else if (size(head) % 2 != 0)
    {
        for (int i = 1; i < size(head) / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
}

void max_min(Node *head, int min, int max, int size)
{
    Node *tmp = head;
//    cout<<size;
    for (int i = 1; i <= size; i++)
    {
          cout<<tmp->val<<" ";
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
      
        // minimum
        
    }
    tmp=head;
    for (int i = 1; i <= size; i++)
    {

           if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
        // maximum
     
    }
    cout<<"running fun"<<endl;
    cout << max << endl;
    cout << min << endl;
}
void search(Node* head,int x,int size)
{
  
    Node * tmp=head;
    bool flag= false;
    int ind=0;
   

    for (int i = 1; i <= size; i++)
    {
       
        if(x==tmp->val) 
        {
            
            flag=true;
            ind=i;
         
            break;
            
        }
     
        tmp = tmp->next;

        

    }

    if(flag==true) cout<<ind-1<<endl;
    else cout<<-1<<endl;
        
  


   

}
int main()
{

  int t;
  cin>>t;
  while(t--)
    
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
       cin>>x;
       search(head,x,size(head));
      
      
   
       
    }
  

}
   

