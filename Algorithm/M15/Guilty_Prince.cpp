#include <bits/stdc++.h>
using namespace std;
const int N=25;
int vis[N][N];
char a[N][N];
int n,m,cnt;
vector<pair<int,int>> d={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
 
void dfs(int si,int sj)
{
    vis[si][sj]=true;
    cnt++;

    for(int i=0;i<4;i++)
{
    int ci=si+d[i].first;
    int cj=sj+d[i].second;
    if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj] == '.')
    {
        dfs(ci,cj);
    }
    
    }
}




int main ()
{
    int t,cs=1;cin>>t;
    while(t--)
{
    // int n,m;
    // int cnt;
    cin>>m>>n;
    int si,sj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='@')
            {
                si=i;
                sj=j;
            }
        }
    }
    cnt=0;
    memset(vis,false,sizeof(vis));
     dfs(si,sj);
     cout<<"Case "<<cs++<<": "<<cnt<<endl;
    }
      
return 0;
}
