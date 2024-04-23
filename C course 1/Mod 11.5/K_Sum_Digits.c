// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//         int n,count=0;
         
//         scanf("%d",&n);
//         char a[n];
//         fgets (a,sizeof(a),stdin);
        
//             for (int i=0;i<strlen(a);i++)
//             {
//                 count=count+a[i]-'0';
//             }
//       printf("%d",count);
//      return 0;
// }

//   #include <stdio.h>
// #include <string.h>
// int main ()
// {
//          int n;
//          int sum=0;
//          scanf("%d",&n);
//          int a[n];

//          for (int i=0;i<n;i++)
//          {
//             scanf("%d",&a[i]);   
//          }

//           for (int i=0;i<n;i++)
//           {
            
//             sum=sum+a[i]-'0';
//           }

//           printf("%d",sum);

//      return 0;
// }

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum = sum + (s[i] - '0');
    }

    printf("%d", sum);

    return 0;
}