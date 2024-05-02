#include <bits/stdc++.h>

using namespace std;
char mat[1005][1005];
bool vis[1005][1005];

map<pair<int,int>,pair<int,int>> mp;
int n, m;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m );
}


void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
             
                mp[{ci,cj}] = {par.first,par.second};
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    int si, sj;
    int di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (mat[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));

    bfs(si, sj);

    pair<int,int> des={di,dj};
    pair<int,int> src={si,sj};

    while(mp[des]!= src)
{
    if(!vis[di][dj]) break;
    if(mat[mp[des].first][mp[des].second]=='D') break;
    else mat[mp[des].first][mp[des].second]='X';
    des=mp[des];
 
}

     for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<mat[i][j];
       
    }
    cout<<endl;
   }


    return 0;
}