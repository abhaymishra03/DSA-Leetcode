class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int fresh = 0;
        int time = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>>vis(n,vector<bool>(m,false));

        queue<pair<int,int>>q;
        
        for(int i = 0 ; i < n ; i++) {

            for(int j = 0 ; j < m; j++) {
                if(grid[i][j]==2)  {

                    q.push({i,j});
                    vis[i][j]=true;


                } else if(grid[i][j]==1)
                fresh++;
            }
        }

        while(!q.empty() && fresh > 0) {

            int sz = q.size();

            while(sz--) {

                int i = q.front().first;
                int j = q.front().second;
                q.pop();


                
            
                if(i-1 >= 0 && !vis[i-1][j] && grid[i-1][j]==1 ){

                    q.push({i-1,j});
                    vis[i-1][j]=true;
                    fresh--;
                } 
                if(i+1 < n  && !vis[i+1][j] && grid[i+1][j]==1 ){

                    q.push({i+1,j});
                    vis[i+1][j]=true;
                    fresh--;
                } 
                if(j-1 >= 0 && !vis[i][j-1] && grid[i][j-1]==1 ){

                    q.push({i,j-1});
                    vis[i][j-1]=true;
                    fresh--;
                } 
                if(j+1 < m && !vis[i][j+1] && grid[i][j+1]==1 ){

                    q.push({i,j+1});
                    vis[i][j+1]=true;
                    fresh--;
                } 
        }
        time++;
        }

        if(fresh>0)return -1;

        return time;


    }
};