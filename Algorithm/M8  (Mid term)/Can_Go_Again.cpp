#include <bits/stdc++.h>
using namespace std;

class Edge 
{
    public:
        int u, v, c;
        Edge(int u,int v,int c)
        {
            this->u = u;
            this->v = v;
            this->c = c;
            
        }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while(e--)
    {
        // input e first hochhe u then v, last er ta u theke v te jawar cost c;
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));  //on directed graph

    }
    const int N = 1e5 + 5;
    int dis[N];

    for (int i = 1; i <= n;i++)
    {
        dis[i] = INT_MAX;

    }
    int src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i < n - 1; i++)
    {
                for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;

            }
        }
    }
    bool cycle = false;

    for (Edge ed : EdgeList)
    {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
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
         
        int q;
        cin >> q;
        while(q--)
          {
            int a;
            cin >> a;
            if(dis[a]==INT_MAX)
            cout << "Not Possible" << endl;
            else cout << dis[a] << endl;
          }
        
    
     }

        return 0; 
}
