#include <stdio.h>
int main ()
{
         int x=10;

         int *ptr=&x;
          
          int *ptr2=ptr;
            
            // pointers will only carry address of 
            // addresses of different data types
            // but pointers will carry value (not address)
            // of another pointer variable 
            // example : a pointer variable will carry 
            // int data type variable address like ptr have the 
            // address of x as value but ptr2 have the value of ptr 
            // not ptr address.
            // And the value of x or different data type 
            // can be accessed directly from any pointer variable 
            // that are linked to x through another pointer 
            // variable like ptr2 directly change the value of x
            // or we can say that ptr2 check the address in its 
            // then goes to that address and change the variable of that address

            // *ptr2= 50;

         printf("x er value %d\n",x);
         printf("x er address %p\n",&x);
         printf("ptr er value %p\n",ptr);
        //  printf("ptr er value %d\n",ptr);
         printf("ptr er address %p\n",&ptr);
         printf("ptr2 er value %p\n",ptr2); 
         printf("ptr2 er address %p\n",&ptr2); 


//          output of above program 

//          x er value 10
// x er address 0061FF1C
// ptr er value 0061FF1C
// ptr er address 0061FF18
// ptr2 er value 0061FF1C
// ptr2 er address 0061FF14
         
     return 0;
}

