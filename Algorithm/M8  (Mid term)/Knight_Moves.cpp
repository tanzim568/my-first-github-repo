#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1005;
char a[N][N];
bool vis[N][N];
int des[N][N];
vector<pair<int, int>> v = {{-2, 1}, {-2, -1}, {-1, -2}, {1, -2},{2, -1},{2, 1},{1, 2},{-1, 2}};

bool valid(int i,int j) 
{
    return (i >= 0 && i < n && j >= 0 && j < m  );
}

void bfs(int sr,int sc)
{
    queue<pair<int, int>> q;
    vis[sr][sc] = true;
    des[sr][sc] = 0;
    q.push({sr, sc});
    
    while(!q.empty())
    {
        
        pair<int, int> par = q.front();
        
        q.pop();
        
        int a = par.first;
        int b = par.second;
        // a[a][b] = 0;
        // cout << a << " " << b << endl;

        for (int i = 0; i < 8;i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            // int val = a[ci][cj];
            if (valid(ci, cj) && !vis[ci][cj]  )
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                des[ci][cj] = des[a][b] + 1;
            }
        }
    }
}

int main()
{

    int q;
    cin >> q;
    while(q--)
    {
        cin >> n >> m;
        int si, sj, di, dj;
        cin >> si >> sj>>di>>dj;
        memset(vis, false, sizeof(vis));
        // memset(a, -1, sizeof(a));
        memset(des, -1, sizeof(des));

        bfs(si,sj);
        cout << des[di][dj] << endl;
    }

    return 0;
}
    // int sr,sj,dr,dj;
    // cin >> n >> m;
    // for (int i = 0; i < n;i++)
    // {
    //     for (int j = 0; j < m;j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }


    //  for (int i = 0; i < n;i++)
    // {
    //     for (int j = 0; j < m;j++)
    //     {
    //         if(a[i][j]=='A')
    //         {
    //              sr = i;
    //             sj = j;
    //         }
    //         else if(a[i][j]=='B')
    //         {
    //              dr = i;
    //              dj = j;
    //         }
    //     }
    // }

// int sr, sj, dr, dj;
// cin >> sr >> sj >> dr >> dj;
// // cout<<sr<<sj<<dr<<dj;

// bfs(sr, sj);

// if (vis[dr][dj])
//     cout << "YES" << endl;
// else
//     cout << "NO" << endl;
// cout << sr << " " << sj << " " << dr << " " << dj  ;

