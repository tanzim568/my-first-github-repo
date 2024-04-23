#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
     string name;
     int roll;
     int marks;
};

int main()
{
     int n;
     cin>>n;
     student a[n];
     for (int i=0;i<n;i++)
     {
          getchar();
          getline(cin,a[i].name);
          cin>>a[i].roll>>a[i].marks;
     }  

     
    //   if (a[i].marks<mn)

    //  student mn;
    //   mn.marks=INT_MAX;

    student mx;
    mx.marks=INT_MIN;
      for (int i=0;i<n;i++)
     {
       
        if (a[i].marks>mx.marks)
        {
            mx=a[i];  // a[i] te condition satisfied kore je marks dukbe sei marks er puro object mn er object e rekhe dibe ba copy kore dibe jai boli
        }
        //   cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<" "<<endl;
     }
    //  cout<<mn<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<" "<<endl;
    return 0;
}
