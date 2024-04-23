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
int main ()
{

      Node* head=new Node(10);
      Node* a=new Node (20);
      Node* b=new Node (30);
      Node* c=new Node (40);

      head->next=a;
      a->next=b;
      b->next=c;

      cout<<head->val<<endl;
      cout<<a->val<<endl;
      cout<<head->next->val<<endl;
      cout<<b->val<<endl;
      cout<<"head er modde c er value -:"<<head->next->next->next->val<<endl;  // head ke direference kore head er next e duksi then ei next er ar address tai head->next kore a er object e duksi then a er object theke a er next ke direference korsi head->next->next ekhon er next e b ar address tai head->next->next->next-> evabe b er object e duke b er next ke direference kore c er val print korsi ar next ke difrence korle NULL pawa jeto 
      cout<<"head er modde c er pointer er value -:"<<head->next->next->next->next<<endl;
       
     //jodi kono pointer variable address na thake value thake tahole direference kore value print korbe ar address ke direference korel oi address borabor destination e chole jabe
      
return 0;
}
