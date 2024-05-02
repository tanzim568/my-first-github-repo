#include <bits/stdc++.h>
using namespace std;
const int N=1050;
char a[N][N];
bool vis[N][N];
int dis[N][N];

map<pair<int,int>,pair<int,int>> mp;
int n,m;
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m );
}


void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;

    while(!q.empty())
    {
        pair<int,int> par=q.front();
        q.pop();
        // cout<<par.first<<" "<<par.second<<endl;
        // cmp++;


        for(int i=0;i<4;i++)
        {
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;

            if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj] != '#')
            {
                // cout<<ci<<" "<<cj<<" ischild off "<<par.first<<" "<<par.second<<endl;
                q.push({ci,cj});
                vis[ci][cj]=true;
                // mp.insert({ci,cj},{par.first,par.second});
                mp[{ci,cj}] = {par.first,par.second};
            


            }
        }

         
    }
}

int main ()
{
   cin>>n>>m;
   int si,sj,di,dj;
  
  //input checked
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
        if(a[i][j]=='R')
        {
            si=i;
            sj=j;
        }
        if(a[i][j]=='D')
        {
            di=i;
            dj=j;
        }
      


      }
   } 

//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//     mp[{}]
//    }
  memset(vis,false,sizeof(vis));
   bfs(si,sj);
 


    
    pair<int,int> des={di,dj};
    pair<int,int> src={si,sj};

    

while(mp[des]!= src)
{
    if(!vis[di][dj]) break;
    if(a[mp[des].first][mp[des].second]=='D') break;
    else a[mp[des].first][mp[des].second]='X';
    des=mp[des];
 
}

     for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j];
       
    }
    cout<<endl;
   }





return 0;
}
