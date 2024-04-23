#include <bits/stdc++.h>
using namespace std;
char a[20][20];
int n, m;

const int N = 1e5 + 5;
vector<pair<int, int>> d={{0,1},{0,-1},{-1,0},{1,0}};
bool vis[20][20];
int level[20][20];

bool valid(int i,int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);    
}

void bfs(int si ,int sj)   
{
    queue<pair<int,int>> q;
    
    q.push({si,sj});
    level[si][sj] = 0;
    vis[si][sj] = true;
    while(!q.empty())
    {
          pair<int,int> par=q.front();
           q.pop();

           int a = par.first;
           int b = par.second;
           cout << a << " " << b << endl;

           for (int i = 0; i < 4;i++)
           {
               int ci = a + d[i].first;
               int cj = b + d[i].second;

               if(valid(ci,cj) && vis[ci][cj]==false && a[ci][cj]!='#')
               {
                   q.push({ci, cj});
                   vis[ci][cj] = true;
                   level[ci][cj] = level[a][b] + 1;
               }
           }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            cin >> a[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si,sj);
    // cout << level[0][3];

    // sob gulo node er level amra view krbo
    // for (int i = 0; i < n;i++)
    // {
    //     cout << "node :" << i <<" "<< "level :" << level[i] << endl;
        
    // }
        return 0;
}
