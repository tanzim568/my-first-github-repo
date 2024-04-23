#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int dis[N];
vector<int> v[N];

void bfs(int s)
{
    queue<int> q;
    vis[s] = true;
    dis[s] = 0;
    q.push(s);
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[par] + 1;
            }
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
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int src,d,k;
    cin >> src >> d >> k;
    bfs(src);
    if(dis[d]!=-1 && k*2>=dis[d])
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
