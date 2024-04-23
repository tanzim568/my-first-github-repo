#include <bits/stdc++.h>
using namespace std;

int main()
{
         // map w ekta key (index) onno ti value(value) like array thake//
         // pair er moto kore map initialize krbo map<index/key er data type, value er data type>;
        

        //normally evabe insert kori na amra
         map<string, int> mp;
        //  mp.insert({"tamim", 75});
        //  mp.insert({"sakib", 9});
        //  mp.insert({"shamim", 79});

        // evabe kori
         mp["tamim"] = 75;
         mp["sakib"] = 8;
         mp["shamim"] = 79;
         mp["akib"] = 80;
         mp["akib"] = 90;

         // normally amra eavbe value dekhi na
          for (auto it = mp.begin(); it != mp.end();it++)
          {
              cout << it->first << " " << it->second<<endl;
          }

         // evabeo value dekha jay but key jdi na pay then 0 dibe always means really kno key jdi 0 die initialize kore thke then thaka sotteo se 0 dibe
         // cout << mp["shamim"] << endl; // index er moto kore value dekh jay but oporer prblm tir jonno evabe dekhi na amra normalyy
        //  cout<<mp["nowrin"]<<endl;

         // mp.cout eti check kore key ache ki na built in stl true false return kore
          
  /// as like set ekhaneo count 1 e thakbe jodi 2 bar o insert kori tao emn na je se duplicate remove kore dey tai count 1 thake like set,, ekhane se new kno key initialize kore na ager tai update kore dey tai count 1 thke.. mane mp.count easily bolte gele oi index ba value koybar asche ta count kore dey but jehetu logic onujai 0,1 dichhe so amra boolean data type hisebeo eke use korte pari
         if (mp.count("akib"))
             cout
                 << "PRESENT" << endl;
         else
             cout << "ABSENT" << endl;

         return 0;
}
