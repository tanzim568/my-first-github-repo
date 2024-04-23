#include <stdio.h>
int main ()
{
         int n;
         scanf("%d",&n);
         int k=n;
         int sp=n-1;
         for (int i=1;i<=2*n;i++)
       {
            
           for (int j=1;j<=sp;j++)
           {
             printf(" ");
           }
           for (int j=n;j<=k;j++)
           {
             printf("*");
           }
           if (i<n)
          {
            k+=2;
            sp--;
          }
          // else if(i=n){
          //   k=10;
          //   sp=0;
          // }
          else if(i>n)
          {
            k-=2;
            sp++;
          }
           printf("\n");
         }
     return 0;
}

