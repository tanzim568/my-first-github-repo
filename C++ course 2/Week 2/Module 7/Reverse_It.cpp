#include <bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string nm;
  int cls;
  string s;
  int id;
};
int main()
{
     
           int n;
      cin>>n;
      Student a[n];
      for (int i=0;i<n;i++)
      {
       cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
       }  
       
      int i=0;
      int j=n-1;
        while (a[i].s<a[j].s)
        {
            swap(a[i].s,a[j].s);
            i++;
            j--;
        }
    
    
    for (int i=0;i<n;i++)
     {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
     }
     
     
    return 0;
}
