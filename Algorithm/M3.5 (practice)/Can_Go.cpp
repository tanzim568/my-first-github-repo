#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1005;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i,int j) 
{
    return (i >= 0 && i < n && j >= 0 && j < m  && a[i][j]!='#' );
}

void bfs(int sr,int sc)
{
    queue<pair<int, int>> q;
    vis[sr][sc] = true;
    q.push({sr, sc});
    
    while(!q.empty())
    {
        
        pair<int, int> par = q.front();
        
        q.pop();
        
        int a = par.first;
        int b = par.second;
        // a[a][b] = 0;
        // cout << a << " " << b << endl;

        for (int i = 0; i < 4;i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            // int val = a[ci][cj];
            if (valid(ci, cj) && !vis[ci][cj]  )
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{
    int sr,sj,dr,dj;
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            cin >> a[i][j];
        }
    }

     for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            if(a[i][j]=='A')
            {
                 sr = i;
                sj = j;
            }
            else if(a[i][j]=='B')
            {
                 dr = i;
                 dj = j;
            }
        }
    }

    bfs(sr, sj);

    if(vis[dr][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // cout << sr << " " << sj << " " << dr << " " << dj  ;

    return 0;
}