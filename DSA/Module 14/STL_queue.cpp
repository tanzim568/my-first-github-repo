#include <bits/stdc++.h>
using namespace std;
// class myQueue
// {
//     public:
//     queue<int> q;
     
//     void push(int val)
//     {
//         q.push(val);
//     }
//     void pop() 
//     {
//         q.pop();
//     }
//     int front()
//     {
//         return q.front();
//     }
//     int size()
//     {
//         return q.size();
//     }
//     bool empty()
//     {
//         return q.empty();
//     }

// };

///above way te class baniye niyye o korar jay abar direct main funtion e queue er stl niye o kora jay but as amra queue shikchi tai direct main function er under e queue niye kaj kora tai easier 

int main()
{
    queue<int> e;
    e.push(10);
    e.push(20);
    e.push(30);
    e.push(40);
  

    while(!e.empty())
    {
        cout << e.front() << endl;
        e.pop();
    }

    return 0;
}
