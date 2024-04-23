// #include <stdio.h>

// //    string a size matter kore na strlen matter kore, tai size parametre e pathaleo hobe na pathaleo somossa nei
// int fun (char a[],int n,int i)
// { 
//     // if (a[i]=='\0')
//     // {
//     //     return 0;
//     // }
//     if (a[i]=='\0') return 0;
//     int len=fun (a,100,i+1);
//     return len+1;

// }
// int main ()
// {       
        
//          char a[100];
//          scanf("%s",a);
//          int l=fun(a,100,0);
//          printf("%d",l);
        
//      return 0;
// }

#include <stdio.h>

//    string a size matter kore na strlen matter kore, tai size parametre e pathaleo hobe na pathaleo somossa nei
int fun (char a[],int i)
{ 
    // if (a[i]=='\0')
    // {
    //     return 0;
    // }
    if (a[i]=='\0') return 0;
    int len=fun (a,i+1);
    return len+1;

}
int main ()
{       
        
         char a[7];
         scanf("%s",a);
         int l=fun(a,0);
         printf("%d",l);
        
     return 0;
}

