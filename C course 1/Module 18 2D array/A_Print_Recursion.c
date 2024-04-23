#include <stdio.h>
void fun(int i)
{    if (i==0) return;
    printf("I love Recursion\n");
    fun (i-1);
}
int main ()
{       
         int x;
         scanf("%d",&x);

         fun(x);
     return 0;
}

