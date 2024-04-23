#include <stdio.h>
#include <string.h>

void fun(char *ar,int n)

// if we take pointer variable variable as parameter and pass array through it
// then pointer array will have all the power of pointer like accessing or 
// changing element of given array

{
   ar[5]='O';

}
int main ()
{
        char ar[10]="Tanzim";
        fun(ar,10);
        
        for (int i=0;i<6;i++)
        {
            printf("%c ",ar[i]);
        }

        
     return 0;
}

