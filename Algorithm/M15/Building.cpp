#include <bits/stdc++.h>
using namespace std;
const long long int N = 1e5 + 5;
long long int par[N];
long long int grp_size[N];

class Edge
{
    public:
        long long int a, b, c;
        Edge(long long int a,long long int b , long long int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;

        }
};

void dsu_init(long long  int n)
{
    for ( int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_size[i]=1;

    }
}

long long int dsu_find(long long int node)
{
  if(par[node]==-1) return node;
  long long int leader=dsu_find(par[node]);
  par[node]=leader;
  return leader;

  
}

void dsu_union_by_size(long long int nodeA,long long int nodeB)
{
    long long int leaderA=dsu_find(nodeA);
    long long int leaderB=dsu_find(nodeB);

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
    long long int n, e;
    cin >> n >> e;
    dsu_init(n);
    long long int cnt=0;
    vector<Edge> edgelist;

    while(e--)
    {
        long long int a, b,c;
        cin >> a >> b >> c;
        edgelist.push_back(Edge(a, b, c));
    }
    
    sort(edgelist.begin(), edgelist.end(), cmp);
    long long int totalcost = 0;
    for(Edge ed:edgelist)
    {
        long long int leaderA = dsu_find(ed.a);
        long long int leaderB = dsu_find(ed.b);

        if( leaderA == leaderB )
        {
            continue;
        }
        else 
        {
            dsu_union_by_size(ed.a, ed.b);
            totalcost += ed.c;

            cnt++;
        }
    }
  
    // for(long long int i=1;i<=n;i++)
    // {
    //     long long int leaderA=dsu_find(2);
    //     long long int leaderB=dsu_find(i);
    //     if( leaderA != leaderB )
    //     {
    //          cout<<-1;
    //         break;

    //     }
    //     else if(i==n)
    //     {
    //         cout<<totalcost;
    //     }
    //     else if(leaderA == leaderB )
    //     {
    //        continue;
    //     }
       
    // }

    if(cnt== n-1)
    {
        cout<<totalcost;
    }
    else cout<<-1;

    return 0;
}
