#include <stdio.h>
int main ()
{
        //  2D array
         int row,col;
         scanf("%d %d",&row,&col);

         int a[row][col];

         for (int i=0;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
                scanf ("%d",&a[i][j]);
            }
   
         }   
        

        //  for (int i=0;i<row;i++)
        //  {
        //     for (int j=0;j<col;j++)
        //     {
        //         printf ("%d ",a[er][j]);
        //     }
        //    printf("\n");
        //  }  

        
        //  exact row.
        // int er;
        // scanf("%d",&er);

        //  for (int i=0;i<col;i++)
        //  {
        //     printf("%d ",a[er][i]);
        //  }int er;
        // scanf("%d",&er);


        // exact colomn
        // int cl;
        // scanf("%d",&cl);
        // for (int i=0;i<row;i++)
        // {
        //     printf("%d\n",a[i][cl]);
        // }

     return 0;
 }