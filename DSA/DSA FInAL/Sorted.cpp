#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        set<int> s;
        int x;
        cin >> x;
        for (int i = 0; i < x;i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }

        for (auto it = s.begin(); it != s.end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
