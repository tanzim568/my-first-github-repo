#include <stdio.h>
#include <string.h>
int main ()
{

         int n;
         scanf("%d ",&n);
         char a[n];

        
        for (int i=0;i<n;i++)
        {
            scanf("%c",&a[i]);
        }
           
           a[11]='\0';
        for (int i=0;i<n;i++)
        {
            printf("%c",a[i]);
        }

     return 0;
}

