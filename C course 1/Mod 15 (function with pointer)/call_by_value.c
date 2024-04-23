#include <stdio.h>


  // for two or more  different function the address
  //  of a  variable will be different , doesn't matter
  //  from where we pass it or in which function we 
  //  pass this value .. the fact is for a same variable 
  //  address of two different function will be different also
  // Just value is copy here from a function to another  not address
int fun (int x)

{
      x=100;
    printf("fun er x %d\n",x);
    return x;
}
int main ()
{
         int x=200;
         int s=fun (x);

        //  we know function carry a variable if we don't save it to another variable
        //  then the value will be lost .. so if we save it in int s and print 
        //  then it will print only fun function variable but in this block x will
        //  remain 200 as always
        
         printf("Main er x %d",x); 
     return 0;
}

