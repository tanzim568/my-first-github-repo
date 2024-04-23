#include <stdio.h>
int main ()
{
         int t;
         scanf("%d",&t);

         for (int i=0;i<t;i++)
         {
            long long int M,a,b,c;
            scanf("%lld %lld %lld %lld",&M,&a,&b,&c);

            long long int sum=a*b*c;


            // printf("%d",M/sum);

            if (M%sum==0)
               printf("%lld\n",M/sum);
            else if (M%sum!=0)
               printf("-1\n");
           

         }
     return 0;
}

