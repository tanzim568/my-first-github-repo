#include <bits/stdc++.h>
using namespace std;

int main()
{
         string s;
         getline (cin,s);

         while ((s.find("EGYPT")!=-1)){
                  s.replace(s.find("EGYPT"),5," ");
         }
        //  int in=s.find("EGYPT"); //jdi s.find funtion er word ti string e na thkle then se -1 output dibe
        
         cout<<s;
    return 0;
}
