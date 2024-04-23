#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum<0)
    {
        printf("%d\n",-(sum));
    }
    else
    {
        printf("%d\n",sum);
    }
    return 0;
}