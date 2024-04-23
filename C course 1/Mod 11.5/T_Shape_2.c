#include <stdio.h>
int main ()
{
         int n;
         scanf("%d",&n);
         int k=n;
         int sp=n-1;

         for (int i=0;i<n;i++)
         {
             for (int j=1;j<=sp;j++)
             {
               printf(" ");
             }
             for (int j=n;j<=k;j++)
             {
               printf("*");
             }
             k+=2;
             sp--;
             printf("\n");
         }
     return 0;
}

