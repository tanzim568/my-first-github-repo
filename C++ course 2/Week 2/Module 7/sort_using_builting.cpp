#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;

};


        bool cmp(student a,student b)
           {
             
            if (a.marks > b.marks )return true; 
            else if  (a.marks==b.marks) 
            {
                return a.roll<b.roll;
            }
           }

int main()
{
        int n;
        cin>>n;
        student a[n];
        for (int i=0;i<n;i++)
        {
           getchar ();
           getline(cin,a[i].name);
           cin>>a[i].roll>>a[i].marks;

        }

               // else if (a.marks < b.marks)
        // {
        //     return false ;
        // }
        // else 
        // {
        //     if (a.roll)
        // }
        
        sort (a,a+n,cmp);

           for(int i=0;i<n;i++)
           {
            cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
           }
    return 0;
}
