#include <bits/stdc++.h>
using namespace std;
int** fun()
{
    int *x=new int;
    *x=600;                         
    int **u=&x; 
    int ***y=&u;
    cout<<&u<<endl;
    cout<<"pointer u:"<<**u<<endl;


    return u;
                         
}
int main()
{        int **p=fun ();             
         
         cout << "main address of x  :"<<p;     
    return 0;
}
