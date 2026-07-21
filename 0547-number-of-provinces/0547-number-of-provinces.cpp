class Solution {
public:

    vector<vector<int>>adj;
    void dfs(int u , vector<bool>& vis) {

        vis[u] = true;

        for(int v : adj[u]) {

            if(!vis[v]) {

                dfs(v,vis);
            }
        }



    }

    int findCircleNum(vector<vector<int>>& isCon) {

        adj.resize(isCon.size());

        for (int i = 0; i < isCon.size(); i++) {

            for (int j = 0; j < isCon.size(); j++) {
                if(isCon[i][j] && i!=j)
                adj[i].push_back(j);
            }
        }

        vector<bool>vis(adj.size(),false);

        int count = 0;

        for(int i =  0 ; i < adj.size(); i++) {

            if(!vis[i]) {
                count++;
                dfs(i,vis);
            }
        }

        return count;

    }
};