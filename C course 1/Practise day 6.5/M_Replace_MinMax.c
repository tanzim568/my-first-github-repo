#include <stdio.h>
#include <limits.h>
int main ()
{
       int n;
       scanf("%d",&n);

       int a[n];
       for (int i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
      
       int mn=INT_MAX;
       int max=INT_MIN;
       int maxIn;
       int minIn;
       int temp;

       
       for (int i=0;i<n;i++)
        {
            
            if (a[i]<mn)

            {
               mn=a[i];
               minIn=i;
            }

            if (a[i]>max)
            {
                max=a[i];
                maxIn=i;
            }

        }

       
       
       
             temp=mn;
             mn=max;
             max=temp;

       
           

           for (int i=0;i<n;i++)
           {
             if (i==minIn)
              {
                  a[i]=mn;

              }
              else if (i==maxIn)
              {
                a[i]=max;

              }
              
           }
     
      for (int i=0;i<n;i++)
       {
         printf("%d ",a[i]);
       }           
     return 0;
}


