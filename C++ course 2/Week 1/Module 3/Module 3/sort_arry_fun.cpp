#include <bits/stdc++.h>
using namespace std;

int main()
{
         int n;
         cin>>n;

         int a[n];
        //  cout <<sizeof(a);
         for (int i=0;i<n;i++)
         {
            cin>>a[i];
         }
         

      /*array sort 2 ta way te kora jay int sort,char sort 
                   int sort er khetre sort(je array sort korbo tar starting pointer, ending pointer);
                   ending pointer er ag porjontoi sort function array sort kore,*/


         sort (a,a+n);  //sort shudu pointer variable ney,, tai pointer array hiseb korle *a,*(a+1),*(a+2) etc evabe hobe ar vitore jehetu pointer e jabe tai xtra pointer sign use kora lgbe na, ar normal array ja ekrokom pointer e seta hiseb krle a[0],a[1],a[2],a[3] same kotha 
                       // means je if index is 2 then *(a+2) ar a[2] same kotha...ar jar pointer dibo tar aag porjonto sort korbe ei function means sob gulo index sort korate chaile n porjonto jete hobe orthat a[5] hole we know index a[0],a[1],a[2],a[3],a[4] so a[4] porjonto ba *(a+4) porjonto sort korate gele amdr a[5] ba *(a+5) jete hobe.. so a[n] hole a+n liklei sob sort kore dibe ei function
                       //ar sort funciton er vitore oo shudu pointer type data e rakhte dey eta tarr characteristics

        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
           cout << *(a+4)<<endl;
           cout<<a[2];
    return 0;
}
