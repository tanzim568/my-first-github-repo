#include <stdio.h>
#include <string.h>

int main ()
{
         int t;
         scanf("%d",&t);

         for (int i=1;i<=t;i++)
         {
            int n,tiger=0,pathan=0;

            scanf("%d",&n);
            char a[100001];
            scanf("%s",a);

            for (int j=0;j<n;j++)
            {
                if (a[j]=='T') tiger++;
                else pathan++;

            }

           
           if (tiger>pathan) printf("Tiger\n");
           else if (pathan>tiger)  printf("Pathaan\n");
           else if (tiger==pathan) printf("Draw");
         }
     return 0;
}

