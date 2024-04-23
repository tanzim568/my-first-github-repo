#include <stdio.h>

void fun (int a )
{
    if (a==0) return;
    printf("%d ",a);
    fun(a-1);
   
}

int main ()
{
         fun(5);
     return 0;
}

