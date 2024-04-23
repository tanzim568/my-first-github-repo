#include <bits/stdc++.h>
using namespace std;

int main()
{
         string s;
         getline(cin,s);
         int flag=0;

         stringstream ss(s);
         string word;
         while (ss>>word)
         {
            if(word=="Jessica")
            {
                flag=1;
                break;
            }
            else flag=0;
         }

         (flag==1)?cout<<"YES":cout<<"NO";
    return 0;
}
