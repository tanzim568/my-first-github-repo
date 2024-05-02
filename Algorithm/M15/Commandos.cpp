#include <bits/stdc++.h>
using namespace std;
const int N=105;
vector<int> v[N];
bool vis[N];
int dis_from_src[N];
int dis_from_des[N];

void bfs(int s,int track)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    if(track == 0 ) dis_from_src[s]=0;
    else dis_from_des[s] =0;
    
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(int child:v[par])
        {
          if(!vis[child])
           {
              q.push(child);
              vis[child]=true;

                if(track == 0 ) dis_from_src[child]=dis_from_src[par]+1;
                else dis_from_des[child] =dis_from_des[par]+1;

           }
        }
    }
}
int main ()

{
    int t,cs=1,ans=0;cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        while(e--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int s,d;
        cin>>s>>d;
        for(int i=0;i<n;i++)
        {
            dis_from_src[i]=-1;
            vis[i]=false;
        }
        bfs(s,0);
        
          for(int i=0;i<n;i++)
        {
            dis_from_des[i]=-1;
            vis[i]=false;
        }

        bfs(d,1);

        // for(int i=0;i<n;i++)
        // {
        //     cout<<i<<" "<<dis_from_des[i]<<endl;
        // }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=dis_from_src[i]+dis_from_des[i];
            mx=max(mx,ans);

        }
        cout<<"Case "<<cs++<<": "<<mx<<endl;
        for(int i=0;i<n;i++)
        {
            v[i].clear();
        }
    }
    
      
return 0;
}
