#include <stdio.h>
#include <string.h>
int main ()
{
        //  char a[100];

        //  for (int i=0;i<100;i++)
        //  {
        //     scanf("%c",a[i]);
        //  }
       
        //  printf("%s",a);

        

        int n;
        scanf("%d",&n);
        // int sz=strlen(a);

         char a[6];
         
        for (int i=0;i<n;i++)
        {
             scanf("%c",a[i]);   
         }
        for (int i=0;i<n;i++)
        {
            printf("%c ",a[i]);
        }
        // for (int i=0;i<=n;i++)
        // {
        //     scanf("%s",a);
        //     printf("%s\n",a);
        //    printf("\n");
        // }
     return 0;
}

