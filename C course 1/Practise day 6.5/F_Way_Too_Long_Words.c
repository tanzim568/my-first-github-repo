#include <stdio.h>
 #include <string.h>


int main()
 {
 
  int n;
  scanf("%d",&n);



  
  char a[n];
   for (int i=0;i<n;i++)
   {
    scanf("%c",&a[i]);
   }

   for (int i=0;i<n;i++)
   { 
    printf("%c\n",a[i]);
    // printf("\n");
    // printf("%d",a[0]);
   }
  //  printf("%d",a[0]);


  // char a[100];
  //   for (int i=0;i<2;i++)
  //   {
  //     scanf("%c",&a[i]);
  //   }
  //   for (int i=0;i<2;i++ )
  //   {
  //     printf("%d ",a[i]);
  //   }
   
  return 0;
}
