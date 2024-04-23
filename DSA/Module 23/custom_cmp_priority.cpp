#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;

    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
    public:
    bool operator() (Student a,Student b)
          {
              if(a.marks==b.marks)
              {
                  return a.roll > b.roll;
              }
              else
                  return a.marks < b.marks;

            // if(a.marks<b.marks)
            // {
            //     return true;
            // }
            // else if(a.marks=)
          }
};
int main()
{
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student data(name, roll, marks);
        pq.push(data);
    }

    while(!pq.empty())
    {
        cout << pq.top().name <<" "<< pq.top().roll <<" "<< pq.top().marks << endl;
        pq.pop();
    }

        return 0;
}
