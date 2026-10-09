class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&mp,vector<bool>& vis,int sc) {

        if(vis[sc])
        return;


        vis[sc]=true;



        for(int val :mp[sc]) {

            if(!vis[val])
            dfs(mp,vis,val);
        }


    }
    bool canVisitAllRooms(vector<vector<int>>& grid) {


        unordered_map<int,vector<int>>mp;



        // creating graph representation


        for(int i = 0 ; i < grid.size(); i++) {

            for(int j = 0 ; j < grid[i].size(); j++) {

                mp[i].push_back(grid[i][j]);
            }


        }

        vector<bool>vis(grid.size(),false);


        dfs(mp,vis,0);

        for(bool val : vis) {

            if(!val)return false;
        }


        return true;
        
    }
};