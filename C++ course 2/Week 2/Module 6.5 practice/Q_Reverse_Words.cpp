#include <bits/stdc++.h>
using namespace std;

int main()
{
         string s;
         getline (cin,s);

         stringstream ss(s);
         string word;
         int f=0;
         
         while (ss>>word)
         {
        //    if(f==0)
        //    {
        //     f=1;
        //    }
        //    else {
             cout<<" ";
        //    }

             { 
             
                     for (int j=word.size()-1;j>=0;j--)
                 {
                          cout<<word[j];
                 }
            
                //  cout<<" ";
           }
         }
    return 0;
}
