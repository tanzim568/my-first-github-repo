#include <bits/stdc++.h>
using namespace std;

int main ()
{
      int q;
      cin>>q;
      while(q--)
      {
        int n;
        cin>>n;
        int a[n];
        bool flag=false;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                flag=true;
                break;
            }
        }
        (flag==false)?cout<<"YES"<<endl:cout<<"NO"<<endl;
 
      }
return 0;
}



