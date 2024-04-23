/*path relax  --->  parent node hochhe je node new kno short way pele tar child gulo keo update korar try korbe ar parent node er cost hochhe updated cost ar child hoche current parent node jedike jabe oi node and tar edge deya cost*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dis[N];        // childnode update kore rakhar jonne eta neya hoche ,, kono node jodi er cheye shortest kono way pai then 
vector<pair<int, int>> v[N];

class cmp
{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b)
    {
        // if(a.second>b.second)
        //     return true;
        // else
        //     return false;
        return (a.second > b.second);
    }
};

void bfs(int src)
{
    priority_queue < pair<int, int>, vector < pair<int, int>>,cmp> pq;
    dis[src] = 0;
    pq.push({src, 0});
    while(!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int,int> child:v[node])
        {
            int childnode = child.first;
            int childcost = child.second;
            if(cost+childcost<dis[childnode])
            {
                dis[childnode] = cost + childcost;
                pq.push({childnode, dis[childnode]});
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
        v[b].push_back({a, c});  // in undirected weighted graph
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    bfs(0);
    // priority_queue < pair<int, int>, vector < pair<int, int>>,cmp> pq;
    // pq.push({1, 10});
    // pq.push({3, 7});
    // pq.push({2, 15}); 
    // pq.push({4, 5});
    // while(!pq.empty())

    // {
    //     cout << pq.top().first << " " << pq.top().second << endl;
    //     pq.pop();
    // }

    for (int i = 0; i < n; i++)
    {
        cout <<"Node "<< i<<" -- > "<<" shortest distance "<<dis[i] << endl;
    }

        return 0;
}
