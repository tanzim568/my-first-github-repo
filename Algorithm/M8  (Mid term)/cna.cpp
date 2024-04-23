#include<bits/stdc++.h>
using namespace std;
class edge
{
    public:
  long long   u;
 long long   v;
  long long c;
    edge(long long   u,long long  v,long long c)
    {
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
const int N=1000;
long long  dis[N];
int main()
{
     long long  n,e;
    cin>>n>>e;
    vector<edge>edgelist;
    while(e--)
 {
       long long  u,v;
        long long c;
        cin>>u>>v>>c;
        edgelist.push_back(edge(u,v,c));
        
    }
    for(  long long  i=1;i<=n;i++)
    {
        dis[i]=1e18 ;
    }
 long long  src;
    cin>>src;
    dis[src]=0;
   
    for(long long  i=1;i<=n-1;i++)
    {
        for(edge ed : edgelist)
        {
            long long  u,v;
            long long c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dis[u]<1e18 && dis[u]+c < dis[v])
            {
                dis[v]=dis[u]+c;
            }
        }
    }
    
         bool cycle=false;
 
        for(edge ed: edgelist)
        {
           long long   u,v;
            long long c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dis[u]<1e18 && dis[u]+c < dis[v])
            {
                cycle=true;
                break;
            }
        }

    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
       
    }
     long long  t;
    cin>>t;
    
  
    for( long long  i=1;i<=t;i++)
    {
        long long  d;
        cin>>d;
        
        if(!cycle)
        {
           if(dis[d]<1e18)
        {
          cout<<dis[d]<<endl;
        }
        else{
          cout<<"Not Possible"<<endl;
           
        } 
        }
        

    }
       
 

    
    return 0;
}