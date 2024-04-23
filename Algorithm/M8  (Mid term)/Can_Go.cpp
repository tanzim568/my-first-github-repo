/*path relax  --->  parent node hochhe je node new kno short way pele tar child gulo keo update korar try korbe ar parent node er cost hochhe updated cost ar child hoche current parent node jedike jabe oi node and tar edge deya cost*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const  int N = 1e5+5;
ll dis[N];        // childnode update kore rakhar jonne eta neya hoche ,, kono node jodi er cheye shortest kono way pai then 
vector<pair<long long int, long long int>> v[N];

class cmp
{
    public:
    bool operator()(pair<long long int,long long int> a,pair<long long int,long long int> b)
    {
        // if(a.second>b.second)
        //     return true;
        // else
        //     return false;
        return (a.second > b.second);
    }
};

void bfs(long long int src)
{
    priority_queue < pair<long long int, long long int>, vector < pair<long long int, long long int>>,cmp> pq;
    dis[src] = 0;
    pq.push({src, 0});
    while(!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int node = parent.first;
        long long int cost = parent.second;
        for(pair<long long int,long long int> child:v[node])
        {
            long long int childnode = child.first;
            long long int childcost = child.second;
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
        long long int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        // v[b].push_back({a, c});  // in undirected weighted graph
    }
    for (long long int i = 1; i <= n; i++)
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
