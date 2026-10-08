class Solution {
public:


    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis,int i,int j,int prev) {

        if(i <0 || j < 0 || i >=  grid.size() || j >= grid[0].size() || vis[i][j] || prev > grid[i][j])
        return ;


        vis[i][j]=true;

        dfs(grid,vis,i-1,j,grid[i][j]);
        dfs(grid,vis,i+1,j,grid[i][j]);
        dfs(grid,vis,i,j-1,grid[i][j]);
        dfs(grid,vis,i,j+1,grid[i][j]);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {


        int n = grid.size();
        int m = grid[0].size();


        vector<vector<int>>res;
        vector<vector<bool>>pacificVis(n,vector<bool>(m,false));
        vector<vector<bool>>atlanticVis(n,vector<bool>(m,false));


        // pacific vis for first col is true
        // atlantic vis for lastt col is true


        for(int i = 0 ; i < n ; i++) {

            dfs(grid,pacificVis,i,0,INT_MIN);
            dfs(grid,atlanticVis,i,m-1,INT_MIN);
        }


        // pacific vis for first row is true
        // atlantic vis for lastt row is true


        for(int j = 0 ; j < m ; j++) {

            dfs(grid,pacificVis,0,j,INT_MIN);
            dfs(grid,atlanticVis,n-1,j,INT_MIN);
        }


        for(int i = 0 ; i < n ; i++) {

            for(int j = 0 ; j < m ; j++) {


                if(pacificVis[i][j] && atlanticVis[i][j])
                res.push_back({i,j});
            }
        }






    return res;
        
    }
};