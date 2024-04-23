#include <bits/stdc++.h>
using namespace std;

void fun(int &p)   // function & (reference dile je value pathabo ar recieve korbo 2 tar address same e thkbe new kno variable create hbe na)
{
    //  p=NULL;
    cout<<p;
}

int main ()
{
      int val=10;
    //   int *ptr=&val;

      fun(val);

    //   cout<<*ptr<<endl;



return 0;
}
