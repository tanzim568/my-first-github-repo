#include <stdio.h>
#include <string.h>
int main ()
{
         char s[1000];
           fgets(s,sizeof(s),stdin);
         for (int i=0;i<strlen(s)-1;i++)
         {
            if(s[i]==',')
              {
                s[i]=' ';
              }
             else if(s[i]>='A' && s[i]<='Z')
              {
               s[i]=s[i]+32;
              }
             else 
              s[i]=s[i]-32;
              
         }
         printf("%s",s);
     return 0;
}

