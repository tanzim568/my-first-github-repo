#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> st1;

    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        st1.push(st.top());
        //cout << st.top() << endl;
        st.pop();

    }

    while(!st1.empty())
    {
        cout << st1.top() << endl;
        st1.pop();
    }


        return 0;
}
