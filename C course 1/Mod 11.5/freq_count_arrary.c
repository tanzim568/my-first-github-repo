// #include <stdio.h>
// int main ()
// {
//          int n;
//          scanf("%d",&n);
         
//           char a[10000001];
//           scanf("%s",a);

//           for (int i=0;i<strlen(s);i++)
//           {
              
//           }
//      return 0;
// }



//  frequency counting array module lecture problem
// #include <stdio.h>
// int main ()
// {
//          int n;
//          scanf("%d",&n);

//          int a[n];
//          for (int i=0;i<n;i++)
//          {
//             scanf("%d",&a[i]);


//          }
//          int cnt[9]={0};
//          for (int i=0;i<n;i++)
//          {
//             int val=a[i];
//             cnt[val]++;

//          }
         
//          for (int i=0;i<n;i++)
//         { printf("%d -%d\n",i,cnt[i]);}

//      return 0;
// }




// #include <stdio.h>
// int main ()
// {
//        int n;
//        scanf("%d",&n);

//        int a[n];
//        for (int i=0;i<n;i++)
//        {
//          scanf("%d",&a[i]);

//        }
      
//        int cnt[9]={0};
        
//         for (int i=0;i<n;i++)
//         {

//             // int val=a[i];
//             //  cnt [val]++;
//            cnt[a[i]]++;
//         }

//         for (int i=0;i<n;i++)
//         {
//          printf("%d -%d\n",i,cnt[i]);
//         }
//      return 0;
// }  

//  character counting with frequency array technique


    // character array(or string) array moto kore for loop diye scanf e input neya jay but sekhetre loop range size deya lage
         // ar amra normaly string size beshi diye rakhi karon string size matter kore na, tai loop range strlen use korte hoy onno kaj like
         // character check or condition check etc.. input to niye strlen ver kore then oita diye per character by character array index 
         // access kora jachhe  ar normaly 
         // scanf diye string input neya  easier 






#include <stdio.h>
#include <string.h>
int main ()
{
         char s[10000001];
         scanf("%s",s);
         int cnt [26]={0};
         for (int i=0;i<strlen(s);i++)
         {
            int value=s[i]-97;
            cnt[value]++;
         }
         for (int i=0;i<strlen(s);i++)
         {
            int val=s[i]-97;
           if(cnt[val]!=0)
           { 
            printf("%c : %d\n",val+97,cnt[val]);
           cnt[val]=0;
           }
            cnt[val]=0;
           }
            
    return 0;
}