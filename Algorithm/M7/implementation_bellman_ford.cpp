#include <bits/stdc++.h>
using namespace std;

class Edge 
{
    public:
        long long int u, v, c;
        Edge(long long int u,long long int v,long long int c)
        {
            this->u = u;
            this->v = v;
            this->c = c;
            
        }
};

 int main()
{
    long long int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while(e--)
    {
        // input e first hochhe u then v, last er ta u theke v te jawar cost c;
        long long int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));  //on directed graph

    }
    const long long int N = 1e5+5;
    long long  int dis[N];

    for (long long int i = 1; i <= n;i++)
    {
        dis[i] = 1e18;

    }
    long long int src;
    cin >> src;
    dis[src] = 0;
    for (long long int i = 1; i < n - 1; i++)
    {
                for (Edge ed : EdgeList)
        {
            long long int u = ed.u;
            long long int v = ed.v;
            long long int c = ed.c;
            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;

            }
        }
    }
    bool cycle = false;

    for (Edge ed : EdgeList)
    {
        long long int u = ed.u;
        long long int v = ed.v;
        long long int c = ed.c;
        if (dis[u] < 1e18 && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
            // dis[v] = dis[u] + c;
        }
    }



     if(cycle) 
     {
         cout << "Negative Cycle Detected" << endl;
          
     }

     else 
     {
         
        long long int q;
        cin >> q;
        while(q--)
          {
            long long int a;
            cin >> a;
            if(dis[a]==1e18)
            cout << "Not Possible" << endl;
            else cout << dis[a] << endl;
          }
        
    
     }

        return 0; 
}
