#include <bits/stdc++.h>
using namespace std;
//   word variable e she ekta ekta word rakhbe then she word ta print korbe like these are cars so amr first fetch e word e these rakhbe then word print korle amra these pabo, ss ke abar fetch korle amra ss er kache next je word ase seta fetch korbe are , word e new value assign hoeche are so se are print korbe,, er por ss er kache cars se word e new value assign korbe cars and word print korle cars pabo ,, erpor jehetu ss er kache ar word nei so she 0 hoe jabe ba ar fetching korbe na, ar word last value tai print korte thkbe

void fun(stringstream& ss)
{
    string word;
    if (ss>>word) // revursive howai se bar bar same function call korte thakbe ar if eo bar bar dukte thkbe  ,ekhane while o use kora jabe 
    {              // ss er kache word khali ba ss=0 na howa porjonto ei loop cholte thkbe
        fun(ss);        
        cout<<word<<endl;       
    }

}
int main()
{
         string s;
         getline(cin,s);
        stringstream ss(s);  //class_name object(constractor parameter)
        fun(ss); // object return in parameter

    return 0;
}
