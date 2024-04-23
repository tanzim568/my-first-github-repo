#include <stdio.h>
int main ()
{
        //  pointer is basically address carrier .. normally we know 
        // that any types of variable carries value but pointer carries address 
        // of a value

         // declaration of a pointer 
        //   data type of that variable which are present in the address of 
        //   this pointer

        // int x=10;
        
        // int *p=&x;
        // printf("%p\n",&x);
        // printf("%p\n",p);

        // Output of above program ⬆️⬆️:
        // 0061FF18
        //  0061FF18

        // to access x value with pointer a concept is used called
        // dereference⬇️⬇️

        //   int x=10;
        
        // int *p=&x;
        // printf("%p\n",&x);
        // printf("%d\n",*p);

        // changing value through pointer variable :

        //   int x=10;
        
        // int *p=&x;
        // printf("%p\n",&x);
        // *p=500;

        // printf("%d\n",*p);
       

    //    if we write without pointer variable * sign
        //   then only p will change the address that we saved for variable x

    //  int *p=&x;
    //     printf("%p\n",&x);
    //     p=500;   //  [like this and there will no variable address to print]

    //     printf("%d\n",*p);
        

     return 0;
}

