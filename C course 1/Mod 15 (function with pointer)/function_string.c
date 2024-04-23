#include <stdio.h>
#include <string.h>

void fun (char ar[])

{
    //  int sz=sizeof(ar)/sizeof(char);   
    //   printf("%d\n",sz); 
    //    size function doesnot work on another function 
        //  for special character like string the only thing matter is length
        //  of the value .... It works perfectly on different function

       
        printf("%d",strlen (ar));
}

int main ()
{
         char ar[20]="Rizon";
        //  int sz=sizeof(ar)/sizeof(char);
          fun (ar);
        //  printf("%d\n",sz);
        
     return 0;
}

