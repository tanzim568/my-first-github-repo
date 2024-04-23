// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int roll;
//     int cls;
//     int cgpa;
//     Student(int roll,int cls,int cgpa)
//     {
//       this->roll=roll;    
//       this->cls=cls;    
//       this->cgpa=cgpa;    
//     }
// };

// // return_type(je data_type return korbe/class name (jehetu class data type same)) function_name () parametres

  
//     Student* fun()
//     {
//         Student rizon(34,14,3); //jehetu object variable er moto kaj kore tai ei class er object rizon amra Student (jehetu class name data type hisebe kaj kore ) data type e return korbo
//         Student* p=&rizon;
//         return p; //class ar obeject er behaviour purotai data_type r variable er behaviour er moto/class r object er modde je relation thkbe ekta data_type r variable er modde same relation thakbe 
//     }


// int main()
// {
//        Student* ans=fun();

//     //    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.cgpa<<endl;
//        cout<<ans->roll<<" "<<ans->cls<<" "<<ans->cgpa<<endl;
      

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

 class Student{
    public:
     int cls;
     int roll;
     int gpa;

     Student(int cls,int roll,int gpa)
     {
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
     }

  };

//   Student *fun()
//   {
//       Student* p=new Student (342,35,4); //heap memory r address p carry korbe ,ar heap memory te class e constractor thakle obossoi call korte hbe 
//       return p;
//   }

int main()
{
        //  Student  *ans=fun();

         Student *ans=new Student(379,48,5);
         cout <<ans->cls<<" "<<ans->gpa<<" "<<ans->roll<<" ";

    return 0;
}
