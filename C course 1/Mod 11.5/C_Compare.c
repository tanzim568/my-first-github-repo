#include <stdio.h>
#include <string.h>

int main ()
{
      char A[21],B[21];
      scanf("%s %s",A,B);

      int res=strcmp(A,B);

       if (res<0) printf("%s",A);
       else if (res>0) printf("%s",B);
       else printf("%s",A);
        

      
     return 0;
}

