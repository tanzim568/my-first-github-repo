#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;  
vector<int> v[N];      
bool vis[N]; 

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

    // int src;
    // cin >> src;
    memset(vis, false, sizeof(vis));
    int comp[5]={0};
    for (int i = 0; i < n; i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            comp[i]++;
        }
    }
    cout << endl
         << endl;
    for (int i = 0; i < 5;i++)
     {
        if(comp[i]>0)
            cout << i << endl;
     }
        return 0;
}
