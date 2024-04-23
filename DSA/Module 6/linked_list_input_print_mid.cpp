#include <bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* next;

   Node(int val)
   {
      this->val=val;
      this->next=NULL;
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
  
    //    cout<< "Node Inserted Successfully" << endl<<endl;
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
void couter_check(Node *head,int frq[101], int cnt)
{
   Node*tmp=head;
   int flag=0;
    for (int i=0;i<cnt;i++)
    {
      frq[tmp->val]++;
      tmp=tmp->next;
        
 
    }
    
    // for(int i=0;i<cnt;i++)
    // {

    //   cout<<frq[i]<<" ";
    //   if(frq[i]>=2)
    //    flag=1;
    //    cout<<flag<<endl;
    //    break;
    //   //  else flag=false;
    // }
    // cout<<flag;
     for(int i=0;i<101;i++)
    {
      if(frq[i]!=0)
     {
      // cout<<i<<"=="<<frq[i]<<" ";
     if(frq[i]>=2)
    //  cout<<"found"<<" ";
     flag=1;
     }
    
    }
     (flag==1)?cout<<"YES"<<endl:cout<<"NO";
    return ;
}
void middle_printer(Node* head,int cnt)
{
    Node *tmp=head;
    if(cnt%2==0) 
    {
        for(int i=1;i<cnt/2;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" ";
        cout<<tmp->next->val;
        return;

    }
    // tmp=head;
     else //if(cnt%2!=0)
    { tmp=head;
        for(int i=1;i<cnt/2+1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val;
        return;
    }

    }

    

int main ()
{
      Node* head=NULL;
      int val; 
      int cnt=0;
      int frq[101]={0};
      while (1)
      {
        cin>>val;
        if(val==-1) break;
        else cnt++;
        
        insert_at_tail(head,val);
        
      }
        //  couter_check(head,frq,cnt);
        middle_printer(head,cnt);

return 0;
}
