// type 3
// no return type + Parameters

#include <stdio.h>

void sum (int x,int y)
{
    int sum=x+y;
    int val=sum;
    printf("%d",val);
    return; 
    // no return value or variable will be taken,
    //  cz void is taking control on return type syntax
        // but return term/statement can be writter and it will work like break 
        // statement as we used in loop

}
int main ()
{
      int a,b;
      scanf("%d %d",&a,&b);
      sum(a,b);
     

     return 0;
}

