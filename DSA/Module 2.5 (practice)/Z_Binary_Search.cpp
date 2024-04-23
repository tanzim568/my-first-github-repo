#include <bits/stdc++.h>
using namespace std;

int main ()
{
      int n,q;
      cin>>n>>q;
 
    int a[n];
      for (int i=0;i<n;i++)
      {
        cin>>a[i];
      }

      sort(a,a+n);

       
      while (q--)
      {
       
       int l=0;
       int r=n-1;
       bool flag=false;
       
        int x;
        cin>>x;
         
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
          
       (flag==false)?cout<<"not found"<<endl:cout<<"found"<<endl;
  
      }
      
return 0;
}
