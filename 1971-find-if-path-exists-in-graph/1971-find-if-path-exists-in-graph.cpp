class Solution {
public:


    bool dfs(unordered_map<int,vector<int>>&mp,vector<bool>& vis,int source ,int destination) {

        if(source == destination)
        return true;

        if(vis[source])
        return false;

        vis[source]=true;


        //explore


        for(auto & it : mp[source]) {

            if(dfs(mp,vis,it,destination))
            return true;
        }

        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {


        unordered_map<int,vector<int>>mp;



        for(auto& edge : edges) {

            int u = edge[0]; 
            int v = edge[1]; 

            mp[u].push_back(v);
            mp[v].push_back(u);


        }



        vector<bool>vis(n,false);


        return dfs(mp,vis,source,destination);


        
    }
};