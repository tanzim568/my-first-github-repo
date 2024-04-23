// type 2: 
// return + no parameters

#include <stdio.h>

  int sum ()
  {
     int x,y;
     scanf ("%d %d",&x,&y);
     int sum=x+y;
      

    // printf("Eta oporer function with no params\n");
    return sum;
  }

int main ()
{
        int s=sum(100);
        //  printf ("Eta main er vitor er function\n");
         printf("%d",s);
     return 0;
}

