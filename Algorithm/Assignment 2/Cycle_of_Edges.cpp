// jodi 2 ta node connect korar somoy leader same hoi then ora connected and cycle detect hobe

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int grp_size[N];

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

int main()
{

    int n,e;
    cin>>n>>e;
    dsu_init(n);
    // cout <<"starting"<<endl;
    bool cycle;
    int cnt = 0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        // cout << a << b << endl;
        int leaderA=dsu_find(a);
        int leaderB=dsu_find(b);

        if(leaderA == leaderB)
        {
            cycle=true;
            cnt++;
        }
        else 
        {
            dsu_union_by_size(a,b);
        }

       
    }
    // (cycle == true) ? cout << cnt<< endl;
    cout << cnt << endl;
    return 0;
}
