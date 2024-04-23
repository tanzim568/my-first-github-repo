#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> mylist(10,5); //  this initialized with 0 size
    // list<int> oddlist = {10, 20, 30, 40, 50 ,60};
    // list<int> mylist(oddlist);// value copied from oddlist to mylist
    // cout << mylist.size();

    // vector<int> v(5,5);   // vector can be printed through for loop index pritner but list STL can't be printed cause we know as list follows linked list in list we can't access index like array even there is no index in linked list,, so to print list STL following method is used
    // for (int i = 0; i < v.size();i++)

    // {
    //     cout << v[i]<<endl;
    // }

    /* 1. to access element in List STL iterator loop is used (follow link instructions on phitron) to access elements through pointers*/

    // for (auto it = mylist.begin(); it != mylist.end();it++)
    // {
    //     cout << *it << endl;
    // }

    

    /*list e ono list er values  list<int> mylist(list1)  ekhane list 1 er sob values mylist e chole asbe/
     ar jdoi arr diey initialize kora data list er moddame print korate chai tahole 
        
        int a[5]={0,1,3,4,5};
         list<int> mylist(a,a+5);   // bracket er vitor pointer nibe shudu (starting pointer,ending pointer)

     // vector diye initialize kora thakle 

       vector <int> v={0,1,2,3,4,5};
       list<int> mylist(v.begin(),v.end());   //not sure but dynamically array er moto kaj kore jegulo ba STL er under e ogulay pointer  variable_name.begin() (starting poitner),variable_name.end() (ending pointer)   jehetu 


       */
    list<int> onlist = {100, 200, 300};
    list<int> mylist2(onlist);

    vector<int> v={0,1,2,3,4,5};
    //= {0, 1, 2, 3, 4, 5};

     list<int> mylist (v.begin(),v.end());

     for (auto it = onlist.begin(); it != onlist.end();it++)
    {
        cout << *it << endl;
    }
    // list e index er loop chalano jay na index access o kora jay na,, but vector e possible cause cause vector container dynamic array use kore create kora hoise









}
