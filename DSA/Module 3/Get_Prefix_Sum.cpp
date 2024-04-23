#include <bits/stdc++.h>
using namespace std;

  int main ()
      {
            long long int n;
            cin>>n;
           long long int v[n];
            for (int i=0;i<n;i++)
            {
                cin>>v[i];
            }

            // for (int i=0;i<n;i++)
            // {
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;

           long long  int pre[n];
            pre[0]=v[0];
          for (int i=1;i<n;i++)
          {
             pre[i]=v[i]+pre[i-1];
          }
          
        reverse(pre,pre+n);


          for (int i=0;i<n;i++)
          {
            cout<<pre[i]<<" ";
          }
          

            
      return 0;
      }