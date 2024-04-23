#include <bits/stdc++.h>
using namespace std;

int main ()
{
      int n;
      cin>>n;
     
      int cnt=0;
      vector <int> v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];

      }
      for (int i=0;i<n;i++)
      {
        auto it= find(v.begin(),v.end(),v[i]+1);
        // (it!=v.end())?cnt++:continue;
        if (it!=v.end())
        {
            cnt++;

        }
        else continue;
      }
      cout<<cnt;
return 0;
}
