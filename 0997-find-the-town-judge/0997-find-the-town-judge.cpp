class Solution {
public:
    int findJudge(int n, vector<vector<int>>& edges) {

        vector<int>indeg(n,0);
        vector<int>outdeg(n,0);


        for(int i = 0 ; i < edges.size();i++) {

            outdeg[edges[i][0]-1]++;
indeg[edges[i][1]-1]++;


        }

        


        for(int i = 0 ; i < n; i++ ) {

            if(indeg[i]==n-1 && outdeg[i]== 0) return i+1;
        }


        return -1;



        
    }
};