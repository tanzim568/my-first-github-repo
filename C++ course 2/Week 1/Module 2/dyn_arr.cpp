// #include <bits/stdc++.h>
// using namespace std;
// int* fun()
// {
//     int *a=new int[5];
//     for (int i=0;i<5;i++)
//     {
//         cin >> a[i];
//     }
//     return a;
// }

// int main()
// {
//          int *b=fun();
//          for (int i=0;i<5;i++)
//          {
//                                 //hok se pointer ar normal variable
//             cout<< b[i]<<" ";   //index access korte variable name same rekhe third bracket dilei chole
//          }

//          cout << b[3];
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int* fun ()

{
   int *a=new int[5]; // amra ekhane a use korchi shudu ektai karon cause normally pointer chara array receive koraleo same hoto just onno function e pathanor por just 1st element er address ta peto baki elements sob delete hoe jay ar dynamic memory delete hoy na tai sob elemets pawa jay main function e amra just 
                      // pointer chara onno kew address receive korte pare na 
    for (int i=0;i<5;i++)
    {
        cin >> a[i];  // in terms of array both pointer variable and normal array variable works like same 
                      // Source : google search: what an array variable actually receive?
    
    }     
    return a;             
}


//   pointer access chara array konovabei return kora jay na .. memory delete hoe jay

int main()
{
    int *b=fun();
    for (int i=0;i<5;i++)
    {
        cout << b[i]<<" ";
    }
    return 0;
}
