#include <bits/stdc++.h>
using namespace std;
int n,m;
// const int N = 20;
char a[20][20];
bool vis[20][20];
int level[20][20];
vector<pair<int, int>> v = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int i,int j)
 {
     return (i >= 0 && i < n && j >= 0 && j < m);
 }

 void bfs(int sr,int sc)
 {
     queue<pair<int,int>> q;
     level[sr][sc] = 0;
     vis[sr][sc] = true;
     q.push({sr, sc});
     while(!q.empty())
     {
         pair<int,int> par = q.front();
         int a = par.first;
         int b = par.second;
         q.pop();

         
         cout << a << " " << b << endl;

         for (int i = 0; i < 4; i++)
         {
             int ci = a + v[i].first;
             int cj = b + v[i].second;
             if(valid(ci,cj)==true && vis[ci][cj]==false)
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int sr, sc;
    cin >> sr >> sc;
    memset(vis, false, sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(sr, sc);

    return 0;
}
