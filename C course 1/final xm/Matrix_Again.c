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

        //  exact row
         
         for (int i=row-1;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
              printf("%d ",a[i][j]);

            }
            
         }
         printf("\n");
         for (int i=0;i<row;i++)
         {
            for (int j=col-1;j<col;j++)
            {
              printf("%d ",a[i][j]);

            }
            
         }
}