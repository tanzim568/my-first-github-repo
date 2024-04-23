// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node (int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }

// };

// void print_linked_list_backward(Node *tail)
// {
//     Node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }

// void insert_at_head(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     newNode->next = head;
//     head->prev = newNode;

//     head = newNode;
//     // newNode=head;
// }

// void insert_at_pos(Node *&head, int pos, int val)
// {
//     Node *newNode = new Node(val);
//     Node *tmp = head;

//     for (int i = 1; i <= pos - 1 /*3-1*/; i++) // sob index diyei count hobe ekhon tmp ache 2 index e
//     {
//         tmp = tmp->next;
//     }

//     newNode->next = tmp->next;
//     tmp->next = newNode;
//     newNode->next->prev = newNode;
//     newNode->prev = tmp;

//     // newNode->prev=tmp;
//     // newNode->next=tmp->next;
//     // newNode->next->prev=newNode;
//     // tmp->next=newNode;
// }

// void insert_at_tail(Node* &head,Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if(tail==NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->prev = tail;
//     tail->next = newNode;
    
//     tail = newNode;
// }

// void print_linked_list_forward(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// void delete_tail(Node *&tail)
// {
//     Node *delNode = tail;
//     tail = tail->prev;
//     delete delNode;
//     tail->next = NULL;
// }

// void delete_head(Node* &head)
// {
//     Node* delNode=head;
//     head=head->next;
//     delete delNode;
//     head->prev=NULL;
// }

// bool check(Node*head1,Node*head2)
// {
//     Node *tmp1 = head1;
//     Node *tmp2 = head2;
//     bool flag = false;
//     while(tmp1!=NULL)
//     {
//         if(tmp1->val!=tmp2->val)
//            {
//                flag = true;
//                break;}
//         tmp1 = tmp1->next;
//         tmp2 = tmp2->next;
//     }
//     return flag;
// }

// int size(Node*head)
// {
//     Node *tmp = head;
//     int cnt = 0;
//     while(tmp!=NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
// int main()
// {
//     Node *head1 = NULL;
//     Node *tail1 = NULL;
    
//     Node *head2 = NULL;
//     Node *tail2 = NULL;
//   int val;
//     while(1)
//     {
        
//         cin >> val;
//         if(val==-1)
//             break;
//         insert_at_tail(head1,tail1, val);
//     }

//     while(1)
//     {
//         int val;
//         cin >> val;
//         if(val==-1)
//             break;
//         insert_at_tail(head2,tail2, val);
//     }

//    if(size(head1)==size(head2))
//    {
//        check(head1, head2);

//         if(check(head1,head2)==true)
//     {
//         cout << "Not same";

//     }
//     else
//         cout << "same";
//    }
//    else
//        cout << "Not same";

   
//     // print_linked_list_forward(head1);
//     // print_linked_list_forward(head2);

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_at_tail(Node* &head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    
    tail = newNode;
}

bool palindrom(Node *head,Node *tail)
{
  while(1)
  {
     if(head->val!=tail->val)
     {
         return false;
     }
     else if(head->next==tail || head==tail)
     {
         break;
     }
     
     else{
      
    
         head = head->next;
         tail = tail->prev;
     }
  }
  return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(1)
    {
        cin >> val;
        if(val==-1)
            break;

        insert_at_tail(head, tail, val);

    }

    if(palindrom(head,tail)==true)
    {
        cout << "YES";
    }
    else if(palindrom(head,tail)==false)
        cout << "NO";

    return 0;
}
