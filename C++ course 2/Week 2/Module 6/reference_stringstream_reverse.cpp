#include <bits/stdc++.h>
using namespace std;

int main()
{
         string s;
         getline(cin,s);
         stringstream ss(s);
         string word;
         ss>>word;
         cout<<word<<endl;
         ss>>word;
         cout<<word<<endl;
         ss>>word;
         cout<<word<<endl;
        //  ss>>word;             //erpor ss ar fetch korche na(ss er vitore ar word nei khali ba ss=0) just word er last value e print hochhe
        //  cout<<word<<endl;
        //  ss>>word;
        //  cout<<word<<endl;
        //  ss>>word;
        //  cout<<word<<endl;


    //   word variable e she ekta ekta word rakhbe then she word ta print korbe like these are cars so amr first fetch e word e these rakhbe then word print korle amra these pabo, ss ke abar fetch korle amra ss er kache next je word ase seta fetch korbe are , word e new value assign hoeche are so se are print korbe,, er por ss er kache cars se word e new value assign korbe cars and word print korle cars pabo ,, erpor jehetu ss er kache ar word nei so she 0 hoe jabe ba ar fetching korbe na, ar word last value tai print korte thkbe
    //   while (ss>>word) // while loop e amra jani she value 0 ba eof(input file 0 na khali na howa porjonot input ney)system e input ney, so ss=0 hole means ss er kache kono words na thkle se loop break korbe
    //   {
    //     cout<<word<<endl;
    //   }
     


    return 0;
}
