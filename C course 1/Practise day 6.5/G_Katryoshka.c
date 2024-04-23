#include <stdio.h>
int main ()
{
         long long int es,fs,bs;
         scanf ("%lld %lld %lld",&es,&fs,&bs);

         long long int min=0;

         if (es<fs && es<bs)
         {
            min=es;
         }
         else if(bs<es && bs<fs)
         {
            min=bs;
         }
         else
         min=fs;
        
        long long int fullBody=min;
        es=es-min;
        bs=bs-min;
        fs=fs-min;

       
                if ((es/2)<=bs)
                fullBody=fullBody+(es/2);
                else 
                {
                    fullBody=fullBody+bs;
                }
                
                printf("%lld",fullBody);

     return 0;
}

