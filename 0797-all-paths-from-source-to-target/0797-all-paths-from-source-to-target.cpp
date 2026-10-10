class Solution {
public:



    void dfs(vector<vector<int>>& graph,vector<vector<int>>&res,vector<int>&temp,int u ,int target) {

temp.push_back(u);
        if(u == target) {

            res.push_back(temp);
        }else {
            for(int& v: graph[u]) {

                dfs(graph,res,temp,v,target);
            }
        }

        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {


        vector<vector<int>>res;


        vector<int>temp;



        dfs(graph,res,temp,0,graph.size()-1);



        return res;


        
        
    }
};