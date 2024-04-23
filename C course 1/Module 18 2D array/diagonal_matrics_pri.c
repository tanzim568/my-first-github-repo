#include <stdio.h>
int main ()
{
         int row,col;
         int flag=1;
         scanf("%d %d",&row,&col);

         int a[row][col];
        
         
         for (int i=0;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
                scanf("%d",&a[i][j]);

            }
            
         }

        
         printf("\n");
         if (row!=col) flag=0;
         
          for (int i=0;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
                // printf("%d ",a[i][j]);
                if (i==j) //diagonal ba korner index gulo hobe 00,11,22,33 ... so i==j
                {
                    continue;
                }
                else if (a[i][j]!=0)
                {
                    flag=0;
                }

                
                
            }
            printf("\n");
         }
         
         if (flag==1)
         printf("Diagonal Matrix");
        else printf("Non Diagonal Matrix");
     return 0;
}

