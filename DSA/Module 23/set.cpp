#include <bits/stdc++.h>
using namespace std;

int main()
{
         //set behind the scene bst implement kora but limited perfomance bst er implementation kora ekhnae 
         //sorted (inOrder e bst print korle sorted pawa jay )
         //duplicate remove kore automatic
         //search  log n e search kore.. balanced binary tree hole.. in worst case (height r node er sonkha same hole) N* O(H)

         set<int> s;
         int n;
         cin >> n;
         while(n--)
         {
             int x;
             cin >> x;
             s.insert(x);
         }
    //chora upay obolombon 
   // eta always ascending order choto theke boro akare sort kore but descending sort o koray jay ekta vector push kore then vector reverse kore .. set er nijosso kon reverse function nei
   // auto duplicate remove kore set jehetu bst te duplicate value thkte pare na
   // sort and duplicate remove case er combination eksthe ashle amr undoubtly set use korbo
   
        //  for (auto it = s.begin(); it != s.end();it++)
        //  {
        //      cout << *it << endl;
        //  }
         //s.count mainly 10 er count back korche jehetur duplicate value se accept korbe na tai count jdi value present thke ekbar e hobe 1 .. ar na pele count 0 ei thkbe 
        //  cout << s.count(10) << endl;   // se duplicate remove korei count kore
         if(s.count(10))
             cout << "YES" << endl;
            else
                cout << "NO";

             return 0;
}
