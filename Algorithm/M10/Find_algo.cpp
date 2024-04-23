#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int grp_size[N];
int level[N];

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        grp_size[i]=1;
        level[i] = 0 ;
    }
    // par[1] = 2;
    // par[2] = 3;
    // par[5] = 6;
    // par[6] = 7;

}

int dsu_find(int node)
{
    if(par[node]==-1)
    return node;  
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader; 
}

void dsu_union(int node1,int node2)
{

    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}

void dsu_union_by_size(int node1,int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(grp_size[leaderA]>grp_size[leaderB])
    {
        par[leaderB] = leaderA;
        grp_size[leaderA] += grp_size[leaderB];
    }
    else 
    {  
        par[leaderA] = leaderB;
        grp_size[leaderB] += leaderA;
    }


}

void dsu_union_by_level(int nodeA,int nodeB)
{
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);

    if(level[leaderA]>level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if(level[leaderB]>level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else {
        par[leaderB] = leaderA;
        level[leaderA]++;
    }
}

int main()
{
    dsu_init(7);

    // for (int i = 1; i <= 7;i++)
    // {
    //     cout << par[i] << endl;
    // }

    

    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    // dsu_union_by_size(3, 5);               

    cout << dsu_find(3) << endl;
    cout << dsu_find(6) << endl;

    return 0;
}
