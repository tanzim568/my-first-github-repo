#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;  //globaly declare korle const variable declare korte hoi .. normal variable declare kora jay na
vector<int> v[N];      // dynamic variable (jar value change kore jay ) globally declare kora jay na
bool vis[N]; 
                // or jar value full program e same thakbe sei variable amra const decalre kore pari
 void dfs(int src)
 {
     vis[src] = true;
     cout << src << endl;
     for(int child:v[src])
     {
        if(!vis[child])
        {   
            dfs(child);
        }
     }
 }
  
int main()
{
    int n, e;
    cin >> n >> e;
    
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    dfs(src);

    return 0;
}
