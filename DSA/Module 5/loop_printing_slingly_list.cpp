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
     Node* a=new Node(20);
     Node* b=new Node (30);
     Node* c=new Node(40);

      head->next=a;
      a->next=b;
      b->next=c;
      
      Node* tmp=head;
     while (tmp!=NULL) // ekhane tmp last node er sesh kore next er NULL value niye pore abar loop e dukte chaile break hoi mane tmp->next loop loop er address thaka kale break hoi oi node er next e null thakar karon ar ei loop ti last node er address e null thakar por e loop er kaj kore abar loop e dukte chaile ba tmp nije null hole ba sob node full complete kore nijer null hobar por break hobe ar arekti null er thik 1 step age break hobe
     {
      cout<<tmp->val<<endl;
      tmp=tmp->next;
     }
    tmp=head;

      while (tmp->next!=NULL)   // tmp->next er loop use korle loop jei node er next e NULL pabe sei node giye theme jabe orthath  NULL wala node e er position/Tmp er value ar Tmp!=null loop ti nije NULL value niye loop sesh kore abar loop e dukte chaile break hoi 
                                // mane tmp->next loop er kono node e null pele oi loop ei dukbe na okhanei theme jabe/ tmp er value te last node er address thaka kale she theme jbe karon oi last node er next she null peyeche tai pore theme jawa tmp ke amader newnode er address er sthe link kore deya hoi  
     {                         
      cout<<tmp->val<<endl;
      tmp=tmp->next;
     }

   

    // prottekbar print korar somsoy head er position jate null e na thake tai ekta temporary variable nie kaj kora hocche ekhne
   //   while (tmp!=NULL)
   //   {
   //    cout<<tmp->val<<endl;
   //    tmp=tmp->next;
   //   }                   



     //ehane problm hocche head null e chole jay

     //khatay likha hoeceh details e 
     
  
return 0;
}
