#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
     
    while(t--)
    {
    stack<int> st;
    string s;
    cin >> s;
    for  (char c:s)
    {
        if(st.empty())

        {
            st.push(c);
        }
        else {
            if(st.top()==c)
            {
                st.push(c);
            }
            else {
                st.pop();
            }
        }
        
    }
    if(st.empty()==true)
    {
        cout << "YES" << endl;

    }
    else
        cout << "NO" << endl;

    }
    return 0;
}
