#include <stdio.h>
#include <string.h>

         #include <stdio.h>
         int main ()
         {
                  int t;         
                  scanf("%d",&t);

                 for (int i=0;i<t;i++)
                 {
                     char a[100];
                     scanf("%s",a);

                     if (strlen(a)>10)
                     {
                     printf("%c%d%c",a[0],strlen(a)-2,a[strlen(a)-1]);
                     }
                     else {
                        printf("%s",a);
                     }
                     printf("\n");
                 }

                  
                 
            
            
            
                 return 0;
         }
         
         

