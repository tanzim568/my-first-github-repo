#include <bits/stdc++.h>
using namespace std;

int main ()
{
      int n;
      cin>>n;
      vector<int> v(n);
      bool flag=false;
      for (int i=0;i<n;i++)
      {
        cin>>v[i];

      }
      for (int i=0;i<n-1;i++)
      {
        for (int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                flag=true;
                break;
            }
              
        }
      }
      (flag==false)?cout<<"NO"<<endl:cout<<"YES"<<endl;
return 0;
}
