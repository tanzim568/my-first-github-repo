#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string nm;
    int cls;
    string s;
    int id;
    int mm;
    int em;
    int total=mm+em;
    
    
};
bool cmp(Student a,Student b)
{
    if (a.mm+a.em == b.mm+b.em)
    {
        return a.id<b.id;
    } else
     return a.mm+a.em>b.mm+b.em;

}


int main()
{
      int n;
      cin>>n;
      Student a[n];

      for (int i=0;i<n;i++)
      {
         cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].mm>>a[i].em;
      } 

    sort(a,a+n,cmp);


      for (int i=0;i<n;i++)
      {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].mm<<" "<<a[i].em<<" "<<endl;
      }
    return 0;
}
