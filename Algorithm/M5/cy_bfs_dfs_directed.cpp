#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int parent[N];
int pathfindng[N];
bool ok;

void dfs(int sr)
{

    vis[sr] = true;
    pathfindng[sr] = true;

    for (int child : v[sr]) // tmi par theke ver hoiso now check tmi par er parent chila ki na .. parent hoile ignore korbo karon tmi par ke true kore ascho tmr r par er parent child relation ignore krbo 2 ta node baadde jdi onno kono node tmk true kore then tmk cycle korbo
    {
        
        if(pathfindng[child])
        {
            ok = true;
        }

        if (!vis[child])
        {
            vis[child] = true;
           
            dfs(child);
        }
     }
     //kaj sesh
     pathfindng[sr] = false;
}

int main()
{
         int n,e;
         cin >> n >> e;
         while(e--)
         {
             int a, b;
             cin >> a >> b;
             v[a].push_back(b);
            //  v[b].push_back(a);

         }
         memset(vis, false, sizeof(vis));
         memset(parent, -1, sizeof(parent));
         memset(pathfindng, false, sizeof(pathfindng));
         ok = false;
         for (int i = 0; i < n; i++)    
         {

            if(!vis[i])
            {
                dfs(i);
            }
         }

         (ok==true) ? cout << "Cycle Found" << endl : cout << "No Cycle" << endl;

         return 0;
}
