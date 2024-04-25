#include <bits/stdc++.h>
using namespace std;
const int N=1050;
char a[N][N];
bool vis[N][N];
int dis[N][N];
// pair<int,int> parent[N][N];
map<pair<int,int>,pair<int,int>> mp;
int n,m,cmp;
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
                // cout<<ci<<" "<<cj<<endl;
                q.push({ci,cj});
                vis[ci][cj]=true;
                // mp.insert({ci,cj},{par.first,par.second});
                mp[{ci,cj}] = {par.first,par.second};
                // parent[ci][cj] = {(par.first,par.second)};
            //     if(a[ci][cj]=='R') return;
            //    else a[ci][cj]='X';
               


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
        if(a[i][j]=='D')
        {
            si=i;
            sj=j;
        }
        if(a[i][j]=='R')
        {
            di=i;
            dj=j;
        }
        //output checked 


      }
   } 
//    cout<<si<<sj;
   bfs(si,sj);

  

//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//         // cout<<a[i][j];
//         if(!vis[i][j] && a[i][j]!='#')
//         {
//             bfs(si,sj);
//         }
//     }
//     // cout<<endl;
//    }

//      for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//         cout<<a[i][j];
       
//     }
//     cout<<endl;
//    }

   
   
for(auto it= mp.begin();it!=mp.end();it++)
{
    // cout<<it->first.first<<it->first.second<<" parent -> "<<it->second.first<<it->second.second<<endl;
    if(a[it->first.first][it->first.second]=='R')
  {
    cout<<it->second.first<<it->second.second<<endl;
    
  }       


}
   

   


//    memset(vis,false,sizeof(vis));
//    int mn=INT_MAX;
//    int cnt=0;
//    for(int i=0;i<n;i++)
//    {
//       for(int j=0;j<m;j++)
//       {
          
//           if(!vis[i][j] && a[i][j]!='-')
//           {
//             // cout<<i<<" "<<j<<endl; 
//             cmp=1;
//             cnt++;
//             bfs(i,j);
//             // cout<<cmp<<endl;
//             mn=min(cmp,mn);
//           }

//       }
//    }
 
    



return 0;
}
