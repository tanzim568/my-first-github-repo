class Solution {
public:
   int n,m;
   bool ok;
    // char a[20][20];
    bool vis[200][200];  //200*200

  
    vector<pair<int,int>> v={{0,1},{0,-1},{-1,0},{1,0}};
    bool valid(int i,int j)
    {
        return (i>=0 && i<n && j>=0 && j<m);
        
    }
  
    void bfs(int sr,int sj,vector<vector<int>> grid)
    {
        queue<pair<int,int>>q ;
        q.push({sr,sj});
        vis[sr][sj]=true; 
        
        while(!q.empty())
        {
            pair<int,int> par=q.front();
            int a=par.first;
            int b=par.second;
            q.pop(); //new added

            for(int i=0;i<4;i++)
            {
                int ci=a+v[i].first;
                int cj=b+v[i].second;
         if(valid(ci,cj) && grid[ci][cj]==0 && vis[ci][cj]==false )
                {
                    if(ci==0 || ci==n-1 || cj==0 || cj==m-1)
                    {
                        ok=false;
                    }
                    q.push({ci,cj});
                    vis[ci][cj]=true;
                  
                }
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid)
     {
         n=grid.size();
         m=grid[0].size();
       
         memset(vis,false,sizeof(vis));

        int c=0;

        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                ok=true;
                if(grid[i][j]==0 && vis[i][j]==false )
                {
                    bfs(i,j,grid);
                    if(ok) c++;

                }
            }

        }
        return c;

        

        
        
        
    }
};