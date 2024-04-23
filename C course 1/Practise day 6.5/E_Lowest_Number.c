#include <stdio.h>
#include <limits.h>

int main ()
{
         int n;
         scanf ("%d",&n);
         int a[n];
         
         for (int i=0;i<n;i++)
         {
            scanf("%d",&a[i]);

         }

         int mn =INT_MAX,pos;
         for (int i=0;i<n;i++)
         {
            if (a[i]<mn)
             {
              mn=a[i];
              pos=i+1;
             }  
         }
         printf("%d %d\n",mn, pos);


     return 0;
}

