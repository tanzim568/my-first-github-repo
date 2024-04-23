#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    // while(!pq.empty())
    // {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }
  
    int q;
    cin >> q;
    while(q--)
    {
          
        int cmd;
        cin >> cmd;
        if(cmd==0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if(cmd==1)
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl;
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
                cout << "Empty" << endl;

            }
            else 
            {
                cout << pq.top() << endl;
            }
            
           }
           else
              { cout << "Empty" << endl;}
        }
    }
    return 0;
}
