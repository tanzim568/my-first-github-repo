#include <stdio.h>

void fun (int i)
{
    // reverse recursive function without array
    //base case
    if (i==10) return;
    fun (i+1);  //<-- waiting mode 
    printf("%d ",i);
    
}

int main ()
{
         fun (1);
     return 0;
}

