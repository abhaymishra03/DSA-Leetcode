class Solution {
public:

    int dfs(int i, int j ,vector<vector<bool>>& vis , vector<vector<int>>& grid) {

        if(i < 0 || j < 0 || i >= grid.size() || j>=grid[0].size() || grid[i][j]!=1 || vis[i][j]) return 0;



            vis[i][j] = true;


            return 1 + 
            dfs(i+1,j,vis,grid)+
            dfs(i-1,j,vis,grid)+
            dfs(i,j+1,vis,grid)+
            dfs(i,j-1,vis,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));

        int currArea = 0;
        int maxArea = 0;
        

        for(int i = 0 ; i < grid.size(); i++){

            for(int j = 0 ; j < grid[0].size();j++) {

                if(!vis[i][j] && grid[i][j]==1) {

                    currArea = dfs(i,j,vis,grid);
                    maxArea=max(maxArea,currArea);
                }
            }

         }

         return maxArea;
    }
};