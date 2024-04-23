#include <stdio.h>
int main ()
{
         int n,ans=-1;
         scanf ("%d",&n);

         int a[n];
          
          for (int i=0;i<n;i++)
          {
            scanf ("%d",&a[i]);
          }
        
         int x;
         scanf ("%d",&x);

         for (int i=0;i<n;i++)
         {
            if (a[i] == x)
            {
                ans=i;
                break;
            }
           
        
         }

         printf("%d",ans);
     return 0;
}

