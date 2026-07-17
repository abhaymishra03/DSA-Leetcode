class Solution {
public:


    void dfs(int i ,int j , int color , int oriColor,vector<vector<int>>& grid) {

        if( i < 0 || j < 0 || i >= grid.size() || j>=grid[0].size() || grid[i][j]!=oriColor || grid[i][j]==color) 
        return ;
        
        grid[i][j]=color;
        dfs(i-1,j,color,oriColor,grid);
        dfs(i+1,j,color,oriColor,grid);
        dfs(i,j-1,color,oriColor,grid);
        dfs(i,j+1,color,oriColor,grid);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        dfs(sr,sc,color,grid[sr][sc],grid);

        return grid;
    }
};