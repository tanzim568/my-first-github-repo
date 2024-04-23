#include <stdio.h>

//   we cannot return array from a function .. (dynamic memory allocation in C++ can do this we will learn this in c++)
//   but receive, print or take input an array on any function

void fun (int *ar,int n)
{
//    int sz=sizeof(ar)/sizeof(int);
//    printf("%d",sz);

    for (int i=0;i<n;i++)
    {
        printf("%d ",*(i+ar));
    }
}
int main ()
{
         int ar[5]={10,20,30,40,50};
        //  int sz=sizeof(ar)/sizeof(int);
        //  printf("%d",sz);
         fun(ar,5);
     return 0;
}

