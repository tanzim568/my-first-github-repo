#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;


};
int main ()
{
      node a,b;

      a.val=10;
      b.val=30;

      a.next=&b;
      b.next=NULL;

      cout<<a.val<<endl;
      cout<<b.val<<endl;

      cout<<(*a.next).val<<endl;  // ekhane direference kore b er puro object er address rakha ache sei borabor b object er sthe linked kora hoeche and jehetu a.next=&b means je b object er puro address tai a.next pointer e rakha hoeche tai a.next ke dereference kore b object er jekhono part er value access kora jay 
      cout<<a.next->next<<endl;   //

return 0;
}
