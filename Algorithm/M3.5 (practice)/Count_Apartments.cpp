#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, m;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i,int j) 
{
    return (i >= 0 && i < n && j >= 0 && j < m  && a[i][j] != '#');
}

void bfs(int sr,int sj)
{
    queue<pair<int, int>> q;
    vis[sr][sj] = true;
    q.push({sr, sj});
    while(!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();
        // cout<<a<<" "<<b<<endl;

        for (int i = 0; i < 4;i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false ) 
            {
                
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{
    // int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int apr = 0;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            if(a[i][j]!='#' && vis[i][j]==false)
            {
                bfs(i, j);
                apr++;
                // cout << i << " " << j << endl;
            }
        }
    }
    cout << apr;
    return 0;
}
