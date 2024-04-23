#include <bits/stdc++.h>
using namespace std;

       class Student  //the size of class will be the total size of data type sizes in it
       {
          public:
             char name[100];  //char array jekhane initialize hoy sekhanei char name[100]="...." evabe likha jay onno kothao jay na
             int roll;
             double cgpa;
         };

int main()
{
     
     Student a;                   //the class name will be seen here as a data type and object is called group of that class (or mostly like variable) name ,we can connect class elements with group  with  a dot(.) || In here a.name/a.cgpa or a.roll;
        a.roll=23;
        a. cgpa=3.454;
                                 // a.name="rizon" <-- evabe neya jabe na keno ta opore discuss kora hoeche 
        char temp[100]="rizon";
        strcpy(a.name,temp);
                                  //   shudu group name print kora jay na, but group die clas connect kore oder element niye kaj kora jay
        cout <<a.name<<" "<<a.roll<<" "<<a.cgpa<<" ";
    //   cin>>a.name>>a.roll>>a.cgpa
    
    
         


        
    return 0;
}
