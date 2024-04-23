#include <bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<int> v[1005];  //per index e ekek ta vector
bool vis[20];
// vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// int bfs(int src)
void bfs(int src,int node)
{
    // int node = 1;
    queue <int> q;
    vis[src] = true;
    q.push(src);
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child] = true;
                node++;
            }
        }
    }
     v1.push_back(node);
    // return node;
}

int main()
{
    int n, e;
    int node;
    
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src=0;
    cin >> src;
    // int c=0;

    for (int i = 0; i < n;i++)
    {
        if(vis[i]==false)
        {
             node= 1;
            bfs(i,node);
           
                }
    }
    // cout << c;
    sort(v1.begin(), v1.end());
     for(int val:v1)
     {
         cout << val << " ";
     }

    return 0;
}
