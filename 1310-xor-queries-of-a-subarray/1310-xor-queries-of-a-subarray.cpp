class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {


        vector<int>xr;

        int currXor = 0;

        for(int i = 0; i < arr.size(); i++) {
            currXor ^= arr[i];
            xr.push_back(currXor);
        }
        
        vector<int>ans;
        for(auto it  : queries ) {
            int l = it[0];
            int r = it[1];

            
            if(l!=0)
            ans.push_back(xr[l-1]^xr[r]);
            else
            ans.push_back(xr[r]);

        }

        return ans;
        
    }
};