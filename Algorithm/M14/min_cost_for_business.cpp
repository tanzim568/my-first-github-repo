#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int grp_size[N];

class Edge
{
    public:
        int a, b, c;
        Edge(int a,int b,int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;

        }
};

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        grp_size[i]=1;

    }
}

int dsu_find(int node)
{
  if(par[node]==-1) return node;
  int leader=dsu_find(par[node]);
  par[node]=leader;
  return leader;

  
}

void dsu_union_by_size(int nodeA,int nodeB)
{
    int leaderA=dsu_find(nodeA);
    int leaderB=dsu_find(nodeB);

    if(grp_size[leaderA] > grp_size[leaderB])
    {
        par[leaderB] = leaderA;
        grp_size[leaderA]+= grp_size[leaderB];

    }
    else
    {
        par[leaderA] = leaderB;
        grp_size[leaderB]+= grp_size[leaderA];

    }
}


bool cmp(Edge a,Edge b)  //priority queue te compare class hoy not function .. ar priority queue te return hoy logic onujai like return a<b jodi a choto b boro pai condition true hole and sort kore dibe fole b age a pore mane ulta kaj kore ar ekhane return ami jevabe chai ota means false hole condition satisfie korbe true hole krbe na

{
    return a.c < b.c;
}




int main()
{
    int n, e;
    cin >> n >> e;
    dsu_init(n);
    vector<Edge> edgelist;

    while(e--)
    {
        int a, b,c;
        cin >> a >> b >> c;
        edgelist.push_back(Edge(a, b, c));
    }
    
    sort(edgelist.begin(), edgelist.end(), cmp);
    int totalcost = 0;
    for(Edge ed:edgelist)
    {
        int leaderA = dsu_find(ed.a);
        int leaderB = dsu_find(ed.b);

        if( leaderA == leaderB )
        {
            continue;
        }
        else 
        {
            dsu_union_by_size(ed.a, ed.b);
            totalcost += ed.c;
        }
    }

    cout << totalcost;

    return 0;
}
