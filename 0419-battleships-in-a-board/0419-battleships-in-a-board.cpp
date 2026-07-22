class Solution {
public:
    void dfs(int i, int j ,vector<vector<bool>>& vis , vector<vector<char>>& grid) {

        if(i < 0 || j < 0 || i >= grid.size() || j>=grid[0].size() || grid[i][j]!='X' || vis[i][j]) return ;



            vis[i][j] = true;


             
            dfs(i+1,j,vis,grid);
            dfs(i-1,j,vis,grid);
            dfs(i,j+1,vis,grid);
            dfs(i,j-1,vis,grid);
    }
    int countBattleships(vector<vector<char>>& grid) {


        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));


        int battleShip = 0;


        for(int i = 0 ; i < grid.size(); i++){

            for(int j = 0 ; j < grid[0].size();j++) {

                if(!vis[i][j] && grid[i][j]=='X'){
                    battleShip++;

                   dfs(i,j,vis,grid);
                    
                }
            }

         }



    return battleShip;
        
    }
};