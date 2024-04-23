#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);


    // // cout << st.top() << endl;
    // // st.pop();
    // // cout << st.top() << endl;
    // // st.pop();
  
    // //cout << st.top() << endl;

    // while(!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

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
        cout << st.top() << endl;
        st.pop();
    }

        return 0;
}
