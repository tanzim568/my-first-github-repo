#include <stdio.h>

//   pointer have a special power to change and access value of a variable
//    from a  function to another

int fun (int *p)
{

    *p=100;
//    printf("Fun p er value %p\n",p);
}
int main ()
{
       int x=50;
       fun (&x);
       printf("Main x er addressn %p\n",&x);
       printf("fun derence x r value %d\n",x);
       
         
     return 0;
}

