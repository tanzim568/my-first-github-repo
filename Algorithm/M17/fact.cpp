#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;

    int CF=fact(n-1);
    return CF*n;

}


int main ()
{

 cout<<fact(4);
      
return 0;
}
