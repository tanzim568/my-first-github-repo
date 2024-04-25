   #include <bits/stdc++.h>
   using namespace std;
   const long long int N = 1e5 + 5;
   long long int par[N];
   long long int grp_size[N];

   class Edge
   {
    public:
        long long int a,b,c;
        Edge(long long int a,long long int b,long long int c)
        {
            this->a=a;
            this->b=b;
            this->c=c;

        }
       
   };
   
   bool cmp(Edge a,Edge b  )
   {
      return a.c < b.c;
   }

void dsu_init(long long int n)
{
    for (long long int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_size[i]=1;

    }
}

long long int dsu_find(long long int node)
{
  if(par[node]==-1) return node;
  long long int leader=dsu_find(par[node]);
  par[node]=leader;
  return leader;

  
}

void dsu_union_by_size(long long int nodeA,long long int nodeB)
{
    long long int leaderA=dsu_find(nodeA);
    long long int leaderB=dsu_find(nodeB);

    if(grp_size[leaderA] > grp_size[leaderB])
    {
        par[leaderB] = leaderA;
        grp_size[leaderA]+= grp_size[leaderB];

    }
    else
    {
        par[leaderA] = leaderB;
        grp_size[leaderB]+= grp_size[leaderA];

    }
}
   
    int main ()
   {
      long long int n,e;
      cin>>n>>e;
      dsu_init(n);
      vector<pair<int,int>> erase;
      vector<pair<int,int>>joint;

      vector<Edge> edgelist;

      while(e--)
      {
        long long int a,b,c;
        cin>>a>>b>>c;
        edgelist.push_back(Edge(a,b,c));
        

      }

      sort(edgelist.begin(),edgelist.end(),cmp);

      long long int totalcost=0,cnt=1;

      for(Edge ed:edgelist)
      {
          long long int leaderA=dsu_find(ed.a);
          long long int leaderB=dsu_find(ed.b);

          if(leaderA == leaderB )
          {
            erase.push_back({ed.a,ed.b});
          }
          else {
            dsu_union_by_size(ed.a,ed.b);
            totalcost +=ed.c;
            cnt++;

          }
      }

    
      if(cnt==n) {
        cout<<erase.size()<<" "<<totalcost;
      }
      else cout<<"Not Possible";
 
        // for(long long inti=1;i<=n;i++)
        //  {
        //     long long intleaderA=dsu_find(2);
        //     long long intleaderB=dsu_find(i);

        //     if(leaderA != leaderB)
        //     {
        //       joint.push_back({2,i});
        //       dsu_union_by_size(2,i);
        //     }
        //  } 
        //  cout<<erase.size()<<endl;
        //  for(long long inti=0;i<joint.size();i++)
        //  {
            
        //     cout<<erase[i].first<<" "<<erase[i].second<<" "
        //     <<joint[i].first<<" "<<joint[i].second<<endl;
        //  }
         
   return 0;
   }
   