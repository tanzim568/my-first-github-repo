// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     string nm;
//     int cls;
//     string s;
//     int id;
//     int mm;
//     int em;

// };

// bool cmp(Student a,Student b)
// {
//     if (a.em==b.em) 
//     {
//         if (a.mm==b.mm)
//         return a.id<b.id;   
//         else return a.mm>b.mm;
//     }
//     else return a.em>b.em;


// }

// int main()
// {
//          int n;
//          cin>>n;
//          Student a[n];

//          for (int i=0;i<n;i++)
//          {
//             cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].mm>>a[i].em;
//          }


//         sort (a,a+n,cmp);
//          for (int i=0;i<n;i++)
//          {
//             cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].mm<<" "<<a[i].em<<endl;
//          }
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
// bool cmp(student a, student b)
// {
//     if(a.eng_marks==b.eng_marks)
//     {
//         
//     }
//     else  if(a.eng_marks==b.eng_marks)
//     {

//        if(a.math_marks>b.math_marks)
//        {
//         return true;
//        }
//        else  if(a.math_marks==b.math_marks)
//        {return a.id<b.id;}
//     }
   
// }


// bool cmp(student a, student b)
//  {
//   if (a.eng_marks >= b.eng_marks)
//    {
       
//         if(a.eng_marks>b.eng_marks){ return true;}
//         else {return false;}
//          if(a.eng_marks==b.eng_marks) 
//         {
//             if(a.math_marks>=b.math_marks)
           
//              {
//                 if (a.math_marks>b.math_marks)
//              {
//                 return  true;
//              }
//              else {return false ;}

//              if (a.math_marks==b.math_marks)
//              {
//                 return a.id<b.id;
//              }
             
//              }
//              else return false ;
//         }
// }
// else
//   return false;
// }


 
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
      cin>> a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;

    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;

    }
    
    return 0;
}