#include <bits/stdc++.h>
using namespace std;
int n;
char a[50][50];
bool vis[50][50];
int dis[50][50];
vector<pair<int,int>> d;

bool valid(int i,int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
        return true;
    else
        return false;
}


   void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}


int main ()
{
    d.push_back ({0,1});
    d.push_back ({0,-1});
    d.push_back ({-1,0});
    d.push_back ({1,0});
      
      int si, sj;
        int di, dj;
        
      while(cin>>n)
      {
        
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='S')
                {
                    si=i;
                    sj=j;
                }
                if(a[i][j]=='E')
                {
                    di=i;
                    dj=j;
                }
            }
        }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<dis[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
      
       
         
      }
      
          memset(vis,false,sizeof(vis));
      memset(dis,-1,sizeof(dis));
      bfs(si,sj);
      cout<<dis[di][dj];

    
return 0;
}




