#include <stdio.h>
int main ()
{
         int ar[5]={10,20,30,40,50};

          printf("0th index of ar %d\n",ar[0]);
          printf("1st index of ar %d\n",ar[1]);
          printf("1st index of ar %d\n",*(ar+2));
          printf("1st index of ar %d\n",*(3+ar));
          printf("1st index of ar %d\n",4[ar]);
        
        //   Array relation with pointer
             
            //  print        print 
            //  values       values
            //  without      with the help of
            //  pointer      pointer
            //    ⬇️           ⬇️
        //   ar[1] <==>  *(ar+1)  
        //   1[ar] <==>  *(1+ar)
        //    both of their values are equal so we can write in both ways


         
     return 0;
}

