#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

      vector <int > v(n);
      vector <int> v2(n);
      vector <int > c(n);
     
      for (int i=0;i<n;i++)
      {
        cin>>v[i];
       
         c.push_back(v[i]);

      } 
       for (int i=0;i<n;i++)
      {
        cin>>v2[i];
        
      } 
    for (int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";

    }
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
 



      

return 0;
}
