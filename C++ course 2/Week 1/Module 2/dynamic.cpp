#include <bits/stdc++.h>
using namespace std;
int*** fun()
{
    int *x=new int;
    *x=50;                           //dereference
 
     //cout << x <<endl;             //or 
     //cout << new int <<endl;       //---->new int er adrress pathay as it is a dynamic memory & static memory always value pathay onno value te rakhr jonne
     //cout << &x<<endl;             //---->x er address
    //  int **a=&x;
      // cout<<"fun ad :"<<&x<<endl;
    int ***u=&x; 
    cout<<"fun add of x :"<<u<<endl;

    return u;
                          // x er value hocche new int er address 
}
int main()
{        int ***p=fun ();             // ei fun function e x value pathabe as x er value e hocche address means je x address pathabe tai function return type int pointer hoise and 
                                     // function je value return korbe setao address tai address receive kore only pointer tai pointer value die ei funciton
                                     // address receive korte hbe.
         
         cout << "main address of x  :"<<p;     // ekhne jdi p er value print korai tahole se address print korbe karon pointer always address as value rakhe.. but jdi 
                                     // dereference korai (*p) tahole address follow korte korte main value print korbe
        //  cout<< a;
    return 0;
}
