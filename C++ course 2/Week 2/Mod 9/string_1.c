#include <stdio.h>
int main ()
{

    // careful about ascii values
         char a[5];
         for (int i=0;i<5;i++)
         {
            scanf("%c",&a[i]);
         }

         for (int i=0;i<5;i++)
         {

            printf("%c",a[i]);
         }
     return 0;
}

