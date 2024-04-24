   #include <bits/stdc++.h>
   using namespace std;
   const int N = 1e5 + 5;
   int par[N];
   int grp_size[N];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_size[i]=1;

    }
}

int dsu_find(int node)
{
  if(par[node]==-1) return node;
  int leader=dsu_find(par[node]);
  par[node]=leader;
  return leader;

  
}

void dsu_union_by_size(int nodeA,int nodeB)
{
    int leaderA=dsu_find(nodeA);
    int leaderB=dsu_find(nodeB);

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
      int n;
      cin>>n;
      dsu_init(n);
      vector<pair<int,int>> erase;
      vector<pair<int,int>>joint;


      for(int i=1;i<=n-1;i++)
      {
         int a,b;
         cin>>a>>b;
         int leaderA=dsu_find(a);
         int leaderB=dsu_find(b);
         
         if( leaderA == leaderB )
         {
            erase.push_back({a,b});
         }
         else 
         {
            dsu_union_by_size(a,b);
         }
         
       
      }
        for(int i=1;i<=n;i++)
         {
            int leaderA=dsu_find(2);
            int leaderB=dsu_find(i);

            if(leaderA != leaderB)
            {
              joint.push_back({2,i});
              dsu_union_by_size(2,i);
            }
         } 
         cout<<erase.size()<<endl;
         for(int i=0;i<joint.size();i++)
         {
            
            cout<<erase[i].first<<" "<<erase[i].second<<" "
            <<joint[i].first<<" "<<joint[i].second<<endl;
         }
         
   return 0;
   }
   