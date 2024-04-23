#include <stdio.h>
using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if(a<b && b<c)
        {
            printf("STAIR\n");
       
        }
        else if(a<b && b>c)
        {
             printf("PEAK\n");
           
        }
        else
             printf("NONE\n");
            
    }
    return 0;
}
