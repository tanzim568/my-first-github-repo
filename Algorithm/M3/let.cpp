class Solution {
public:
    void dfsMake1(vector<vector<int>>& grid,vector<vector<bool>>& visited,int row,int col,int n,int m,int delRow[],int delCol[]) {
        visited[row][col] = true;

        grid[row][col] = 1;

        for(int i=0;i<4;i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !visited[nRow][nCol] && grid[nRow][nCol] == 0) {
                dfsMake1(grid,visited,nRow,nCol,n,m,delRow,delCol);
            }
        }
    }

    void bfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int srow,int scol,int n,int m,int delRow[],int delCol[]) {
        queue<pair<int,int>> q;

        q.push({srow,scol});

        visited[srow][scol] = true;

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            for(int i=0;i<4;i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if((nRow >= 0 && nRow < n) &&
                (nCol >= 0 && nCol < m) &&
                !visited[nRow][nCol] &&
                grid[nRow][nCol] == 0) {
                    q.push({nRow,nCol});
                    visited[nRow][nCol] = true;
                }
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));

        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};


        //MArking boundary 0 cells as 1 and visited so they can not form an island
        for(int i=0;i<n;i++) {

            //For First Col
            if(grid[i][0] == 0 && !visited[i][0]) {
                dfsMake1(grid,visited,i,0,n,m,delRow,delCol);
            }

            //For Last Col
            if(grid[i][m-1] == 0 && !visited[i][m-1]) {
                dfsMake1(grid,visited,i,m-1,n,m,delRow,delCol);
            }
        }

        //MArking boundary 0 cells as 1 and visited so they can not form an island
        for(int j=0;j<m;j++) {

            //For First Row
            if(grid[0][j] == 0 && !visited[0][j]) {
                dfsMake1(grid,visited,0,j,n,m,delRow,delCol);
            }

            //For Last Row
            if(grid[n-1][j] == 0 && !visited[n-1][j]) {
                dfsMake1(grid,visited,n-1,j,n,m,delRow,delCol);
            }
        }

        int count = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 0 && !visited[i][j]) {
                    bfs(grid,visited,i,j,n,m,delRow,delCol);
                    count++;
                }
            }
        }

        return count;
    }
};