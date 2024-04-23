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
                  if(a[i][j]!=a[0][0])// korno borabor check hobe 00 point er sthe
                                      // korno borabor baki gulor mil ache ki na!
                   
                   
                    {flag=0;}     // korno borabor mil na thakle condition dibo
                                  // ar mil thkle baki korno check korar jonne rekhe dbo
                    // continue;  // jdi condition sotto hoy flag chnge hoe loop theke
                                  // ver hoye jbe ar flag chnge hoise mne result chole asche amadr
                }
                else if (a[i][j]!=0)
                {
                    flag=0;
                }

                
                
            }
            printf("\n");
         }
         
         if (flag==1)
         printf("scalar matriz");
        else printf("Non Scalar Matrix");
     return 0;
}

