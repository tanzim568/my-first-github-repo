#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector <int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }
     
    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();

    }
    bool empty()
    {
        if(v.size()==0)
            return true;
            else
                return false;
    }

};
int main()
{
    myStack st;
    // st.push(10);
    // //on st.top and st.pop we use if conditon to make sure  if there is at least a value other to access null value the compiler will gave garbage value or error
    // if (st.empty() == false)
    // {
    //     cout << st.top() << endl;
    // }

    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // for (int i = 0; i < n;i++)
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    while(!st.empty())    //st.empty() eta diye just st.empty() true bujay  ar !st.empty() dile eta false bujay
    {
        cout << st.top() << endl;
        st.pop();
    }
        return 0;
}
