#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
      int a[n];
      for (int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    sort (a,a+n);
      int l=0;
      int r=n-1;
       int x;
        cin>>x;
         bool flag=false;
      while (l<=r)
      {
       
       

        int mid=(l+r)/2;
          if(a[mid]==x)
          {
            flag=true;
             break;
          }
          if(x>a[mid])
          {
            //dane jabo
            l=mid+1;
          }
          else 
          {
            //bame jabo
            r=mid-1;
          }
          

      }
      (flag==false)?cout<<"NO":cout<<"YES";
return 0;
}
