class Solution {
public:

    bool visit[200][200];
    int row,col;
    bool ok; // new added
    vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

    bool valid(int ci,int cj)
    {
        if(ci < 0 || ci >= row || cj < 0 || cj >= col) // cj>=cj likhecilen
        {
            return false;
        }

        return true;
    }

    void bfs(int si,int sj,vector<vector<int>> grid)
    {
        queue<pair<int,int>> q;
        q.push({si,sj});
        visit[si][sj] = true;

        while(!q.empty())
        {
            pair<int,int> p = q.front();
            int a = p.first;
            int b = p.second;
            q.pop();

            for(int i=0; i<4; i++)
            {
                int ci = a + d[i].first;
                int cj = b + d[i].second;

                if(valid(ci,cj) && grid[ci][cj]==0 && visit[ci][cj]==false)
                {
                     if(ci==0 || ci==row-1 || cj == 0 || cj == col-1){ // new added
                       ok = false; 
                    }
                    q.push({ci,cj});
                    visit[ci][cj] = true;
                }
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();

        memset(visit,false,sizeof(visit));

        int c = 0;
        for(int i=1; i<row-1; i++)
        {
            for(int j=1; j<col-1; j++)
            {
                ok = true; // new added
                if(grid[i][j] == 0 && visit[i][j] == false)
                {
                    
                    bfs(i,j,grid);
                    if(ok) c++; // new added
                }
            }
        }

        return c;
    }
};