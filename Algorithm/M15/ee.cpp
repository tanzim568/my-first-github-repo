#include<bits/stdc++.h>
using namespace std;
char c[1000][1000];
bool vis[1000][1000];
int n,m;
int dis[1000][1000];
pair<int, int> parent[1000][1000]; 
vector<pair<int,int>> d ={{0,1},{0,-1},{-1,0},{1,0}};//4 ta pair upore niche pase samne jaor jnno

bool valid(int i,int j)
{
if(i<0 || i>=n || j<0 || j>=m )
{
    return false;//invalid
}

else{
    return true;
}
}

void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;//source ar dis 0 kre dite hoy
    memset(parent,-1,sizeof(parent));
    while(!q.empty())
    {
       pair<int, int> par=q.front();
       int a=par.first,b=par.second;
        q.pop();
       
        
           for(int i=0;i<4;i++)//pair ar opor loop
    {
        int ci=a+d[i].first;
        int cj=b+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && c[ci][cj]!='#')
        { 
            q.push({ci,cj});
            vis[ci][cj]=true;
            dis[ci][cj]=dis[a][b]+1;
            parent[ci][cj]={a,b};
     
        }
    }

    }
}

vector<pair<int, int>> shortestPath(int bi, int bj) 
{
    vector<pair<int, int>> path;
    pair<int, int> curr = {bi, bj};

    while (curr.first !=(-1) && curr.second != (-1))
     {
        path.push_back(curr);
if( c[curr.first][curr.second]== '#' ){
     c[curr.first][curr.second] = '#'; 
}
        else if( c[curr.first][curr.second] == 'D')
{
     c[curr.first][curr.second] = 'D'; 
}
 else if( c[curr.first][curr.second]== 'R' ) 
{
     c[curr.first][curr.second] = 'R'; 
}

else {
      c[curr.first][curr.second] = 'X'; 
}
        curr = parent[curr.first][curr.second];
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //        cout << c[i][j];  
    //     }
    //     cout<<endl;
    // }
  
    return path;
}


int main()
{
    
    cin>>n>>m;
    int ai=0,aj=0;
int bi=0,bj=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='R')
            {
                ai=i;
                aj=j;
            }
             if(c[i][j]=='D')
            {
                bi=i;
                bj=j;
            }
        }
    }

  
   memset(vis,false,sizeof(vis));
    bfs(ai,aj);
     shortestPath(bi, bj);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout << c[i][j];  
        }
        cout<<endl;
    }
  
    return 0;
}
