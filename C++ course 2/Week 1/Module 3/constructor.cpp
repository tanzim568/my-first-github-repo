#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    int cgpa;
    Student(int roll,int cls,int cgpa)
    {
      this->roll=roll;    //(*this).roll=roll;  2nd colomn er moto likha jay ekhane this ekti pointer hisebe kaj korbe ja shudu ei class er elements kei point korbe 
      this->cls=cls;    //(*this).cls=cls;   (*)&(.) dereference ar dot 2 tai arrow sign replace kore
      this->cgpa=cgpa;    //(*this).cgpa=cgpa;   
    }
};

int main()
{
         Student a(98,10,3);
         Student b(45,9,20);

         cout<<a.roll<<" "<<a.cls<<" "<<a.cgpa<<" "<<endl;
         cout<<b.roll<<" "<<b.cls<<" "<<b.cgpa<<" "<<endl;

    return 0;
}
