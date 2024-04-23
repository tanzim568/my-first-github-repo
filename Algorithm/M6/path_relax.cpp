/*path relax  --->  parent node hochhe je node new kno short way pele tar child gulo keo update korar try korbe ar parent node er cost hochhe updated cost ar child hoche current parent node jedike jabe oi node and tar edge deya cost*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dis[N];        // childnode update kore rakhar jonne eta neya hoche ,, kono node jodi er cheye shortest kono way pai then 
vector<pair<int, int>> v[N];

void bfs(int src)
{
    queue < pair<int,int>> q;
    dis[src] = 0;
    q.push({src, 0});
    while(!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int,int> child:v[node])
        {
            int childnode = child.first;
            int childcost = child.second;
            if(cost+childcost<dis[childnode])
            {
                dis[childnode] = cost + childcost;
                q.push({childnode, dis[childnode]});
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
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        // v[b].push_back({a, c});  // in undirected weighted graph
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    int src;
    cin >> src;

    bfs(src);


    int q;
    cin >> q;
    while(q--)
    {
        int des, cos;
        cin >> des  >> cos;
        if(dis[des]<=cos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
        return 0;
}
