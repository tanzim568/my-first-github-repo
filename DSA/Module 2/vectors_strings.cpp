#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // space char cin diye string input
    //   vector <string> v;
    //   int n ;
    //   cin>> n;

    //   for (int i=0;i<n;i++)
    //   {
    //      string s;
    //      cin>> s;
    //      v.push_back(s);
    //   }

    //   for (int i=0;i<v.size();i++)
    //   {
    //     cout<<v[i]<<" "<<endl;
    //   }

    // space soho getline diye string input in vector 
    int n;
    cin>> n;
    cin.ignore();
    vector <string> v(n);

    for (int i=0;i<n;i++)
    {
    
        getline(cin,v[i]);
      
    }

    // for (string val:v)
    // {
    //     cout<<val<<" "<<endl; 
    // }

        for (int i=0;i<v.size();i++)
      {
        cout<<v[i]<<" "<<endl;
      }
return 0;
}
