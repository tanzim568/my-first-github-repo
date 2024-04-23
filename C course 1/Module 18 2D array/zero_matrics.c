#include <stdio.h>
int main ()
{
         int row,col;
         int cnt=0;
         scanf("%d %d",&row,&col);

         int a[row][col];
        
         
         for (int i=0;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
                scanf("%d",&a[i][j]);

            }
            
         }

         int ele=row*col;
         printf("\n");
          for (int i=0;i<row;i++)
         {
            for (int j=0;j<col;j++)
            {
                // printf("%d ",a[i][j]);
                if (a[i][j]==0)
                cnt++;
                
            }
            printf("\n");
         }
            // printf("%d\n",cnt);
            // printf("%d",ele);
         if (ele==cnt)
         printf("zero matrix");
        else printf("Non-zero matrix");
     return 0;
}

