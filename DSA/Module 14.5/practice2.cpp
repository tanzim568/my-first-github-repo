#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<int> st;
    queue<int> q;
    bool flag = true;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);

    }
    int m;
    cin >> m;
    for (int i = 0; i < m;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if(st.size()==q.size())
    {
        while(!st.empty())
        {
            if(st.top()==q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag = false;
                break;
            }
           
        }
         (flag == true) ? cout << "YES" << endl : cout << "NO";
    }
    else
        cout << "NO";

        return 0;
}
