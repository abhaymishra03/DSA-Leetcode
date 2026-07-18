class Solution {
public:

    void dfs(int u , vector<vector<int>>& adj , vector<bool>& vis) {

        vis[u]=true;

        for(int v : adj[u]) {

            if(!vis[v])
            dfs(v,adj,vis);
        }

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {


        vector<vector<int>>adj(n);

        for(int i = 0 ; i < edges.size(); i++) {

            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);

            
        }


        vector<bool>vis(n,false);


        dfs(source,adj,vis);


        return vis[destination];
    }
};