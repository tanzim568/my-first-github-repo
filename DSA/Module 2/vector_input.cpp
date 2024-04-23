#include <bits/stdc++.h>
using namespace std;

int main ()
{
      //vector <int>v={1,2,4,5,3};
      // jehetur vector dynamically kaj kore tai increase kore koreo vector value input kora jay push back() er maddome
//  // vector input type 1(without initializing size)
//          vector <int> v;
//         int N;
//         cin>>N;
         
//          for (int i=0;i<N;i++)
//          {
//             //cin>>v[i] // evabe input neya jbe na vector cz size initialize kore hoi ni but ei system ta arektu modify korle size initialize kra charao neya jachhe
              
//               int x;
//               cin>>x;
//               v.push_back(x);

//          }

//          for (int i=0;i<N;i++)
//          {
//             cout<<v[i]<<" ";
//          }
 
       int n;
       cin>>n;
       vector <int> v(n);
      
       for (int i=0;i<n;i++)
       {
        cin>>v[i];

       }
  
  for (int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }


return 0;
}
