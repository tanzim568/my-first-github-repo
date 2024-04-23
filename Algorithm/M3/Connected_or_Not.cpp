#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];

int main()
{
    int n, e;
    cin >> n >> e;
    
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        
    }

    int q;
    cin >> q;
    
    while(q--)
    {

        bool flag = false;
        int a, b;
        cin >> a >> b;
        for(int child:v[a])
        {
            if(child==b || a==b)
            {
                 flag = true;
                 break;
            }
           
        }
        (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
