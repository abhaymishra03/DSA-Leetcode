class Solution {
public:
    int n, m;

    long long dfs(vector<vector<int>>& grid,int i , int j,long long& sum) {


        if(i < 0 || j < 0 || i>= n || j >= m || grid[i][j]==0)
        return sum;


        sum+=grid[i][j];


        grid[i][j]=0;

        dfs(grid,i-1,j,sum);
        dfs(grid,i,j-1,sum);
        dfs(grid,i+1,j,sum);
        dfs(grid,i,j+1,sum);



        


        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {

        n = grid.size();
        m = grid[0].size();

        int count = 0;
        long long sum =0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (grid[i][j] != 0) {

                    sum =0;
                    dfs(grid, i, j,sum);

                    if (sum%k == 0){
                        count++;
                    
                        }
                }
            }
        }


        return count;
    }
};