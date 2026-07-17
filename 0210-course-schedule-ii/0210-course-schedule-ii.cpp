class Solution {
public:
    bool dfs(int u, vector<bool>& vis, vector<bool>& recPath,
             vector<vector<int>>& adj) {
        vis[u] = true;
        recPath[u] = true;

        for (int v : adj[u]) {

            if (!vis[v]) {

                if (dfs(v, vis, recPath, adj)) {
                    return true;
                }
            } else if (recPath[v]) {
                return true;
            }
        }

        recPath[u] = false;

        return false;
    }

    bool canFinish(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for (int i = 0; i < edges.size(); i++) {

            int u = edges[i][1];
            int v = edges[i][0];

            adj[u].push_back(v);
        }

        vector<bool> vis(adj.size(), false);
        vector<bool> recPath(adj.size(), false);

        for (int i = 0; i < adj.size(); i++) {
            if (!vis[i]) {
                if (dfs(i, vis, recPath, adj)) {
                    return false;
                }
            }
        }

        return true;
    }

    void topoSort(int u , vector<bool>& vis, stack<int>& s,vector<vector<int>>& adj) {

        vis[u]=true;

        for(int v : adj[u]) {

            if(!vis[v]) {
                topoSort(v,vis,s,adj);
            }
        }

        s.push(u);
    }
    vector<int> findOrder(int n, vector<vector<int>>& edges) {

        if(!canFinish(n,edges)){
            return {};
        }

       vector<vector<int>> adj(n);

        for (int i = 0; i <edges.size(); i++) {

            int u = edges[i][1];
            int v = edges[i][0];

            adj[u].push_back(v);
        }

        vector<bool> vis(adj.size(), false);
        stack<int>s;

        for(int i = 0 ; i < n; i++) {
            if(!vis[i]) {
                topoSort(i,vis,s,adj);
            }
        }
        vector<int>ans;
        while(!s.empty()) {

            ans.push_back(s.top());
            s.pop();

        }

        return ans;

        
    }
};