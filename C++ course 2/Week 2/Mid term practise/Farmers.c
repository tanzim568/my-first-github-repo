#include <stdio.h>
int main ()
{
         int n;
         scanf ("%d",&n);
       
         int a[n];
         int b[n];
         int c[n];
         

         for (int i=0;i<n;i++)
         {
            scanf("%d %d %d",&a[i],&b[i],&c[i]);

         }

       int newp,ans1,ans2,fans;
       for (int i=0;i<n;i++)
         {
            newp=a[i]+b[i];
            ans1=a[i]*c[i];
            ans2=ans1/newp;
            fans=c[i]-ans2;

            printf("%d\n",fans);
         }

     return 0;
}

