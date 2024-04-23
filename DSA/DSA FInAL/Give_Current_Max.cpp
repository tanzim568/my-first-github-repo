#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
        string name;
        int roll;
        int marks;
    student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
    public:
    bool operator()(student a,student b)
    {
        if(a.marks==b.marks)
        {
            return a.roll > b.roll;
        }
        else
            return a.marks < b.marks;
    }
};



int main()
{
    int n;
    cin >> n;
    priority_queue<student, vector<student>,cmp> pq;
    while(n--)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int cmd;
        cin >> cmd;
        if(cmd==0)
       {
            
            string name;
          
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl; 

        }
        else if(cmd==1)
        {
            if(!pq.empty())
            {
               cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl; 
            }
            else
                cout << "Empty" << endl;
        }
        else if(cmd==2)
        {
            if(!pq.empty())
            {
                pq.pop();
              if(pq.empty())
              {
                  cout << "Empty"<<endl;
              }
              else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}
