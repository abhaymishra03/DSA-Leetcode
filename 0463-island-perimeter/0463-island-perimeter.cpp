class Solution {
public:


    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis,int i , int j) {

        if(i < 0 || j < 0 || i>=grid.size() || j >= grid[0].size() || vis[i][j] || grid[i][j]!=1)
        return 0;


        int currP=4;


        vis[i][j]=true;

        if(i-1 >=0 && grid[i-1][j]==1)
        currP--;
        if(j-1 >=0 && grid[i][j-1]==1)
        currP--;
        if(i+1 < grid.size() && grid[i+1][j]==1)
        currP--;
        if(j +1 < grid[0].size() && grid[i][j+1]==1)
        currP--;


        return currP + dfs(grid,vis,i-1,j) + dfs(grid,vis,i,j-1) + dfs(grid,vis,i+1,j) + dfs(grid,vis,i,j+1);

    }
    int islandPerimeter(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int perimeter = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (!vis[i][j] && grid[i][j] == 1)
                    perimeter+= dfs(grid, vis, i, j);
            }
        }

        return perimeter;
    }
};