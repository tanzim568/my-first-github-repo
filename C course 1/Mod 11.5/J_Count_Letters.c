// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//          char s[10000001];
//          scanf("%s",s);
//          int cnt[26]={0};
//          for (int i=0;i<strlen(s);i++)
//          {
//             int val1=s[i]-97;
//             cnt[val1]++;
//          }
//          for (int i=0;i<strlen(s);i++)
//          {
//             int fval=s[i]-'a';
//             if (cnt[fval]!=0)
//             {
//             printf("%c : %d\n",fval+97,cnt[fval]);
//             cnt[fval]=0;
//              }
//             }
          
//      return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char s[10000001];
//     scanf("%s", s);

//     int cnt[26] = {0};

//     for (int i = 0; i < strlen(s); i++)
//     {
//         // int val1 =
//          cnt[s[i]- 'a']++;
//         // cnt[val1]++;
//     }

//     for (int  i =0;i<26; i++)
//     {
        
//         if (cnt[i]!= 0)
//         {
//             printf("%c : %d\n",i+97,cnt[i]);
//             cnt[i] = 0;  // Reset count after printing
//         }

//         // printf("%c : %d\n", i, cnt[fval-'a']);
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char s[10000001];
//     scanf("%s", s);

//     int cnt[26] = {0};

//     for (int i = 0; i < strlen(s); i++)
//     {
//         // int val1 =
//          cnt[s[i]- 'a']++;
//         // cnt[val1]++;
//     }

//     for (int  i =0;i<26; i++)
//     {
        
//         if (cnt[i]!= 0)
//         {
//             printf("%c : %d\n",i+97,cnt[i]);
//             cnt[i] = 0;  // Reset count after printing
//         }

//         // printf("%c : %d\n", i, cnt[fval-'a']);
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//          char c;
//          int cnt[26]={0};

//          while (scanf("%c",&c)!=EOF)
//          {

//            cnt[c-'a']++;   
         
//          }

//          for (int i=0;i<strlen(c);i++)
//         //  jehetur value save nai sehetu strlen kaj krbe na .. Strnlen count kroar jonno memory te array char thkte hbe obossoi

//          {
//             // int val=cnt[i-97];
//             printf("%c : %d",i,cnt[c]);
//          }
//      return 0;
// }

#include <stdio.h>
int main ()
{
         char c;
         int cnt[26]={0};
         while (scanf("%c",&c)!=EOF)
         {
              cnt[c-'a']++;
         }

         for (int i=0;i<26;i++)
         {
            if (cnt[i]!=0)
            printf("%c : %d\n",i+97,cnt[i]);
            cnt [i]=0;
         }
     return 0;
}

