class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<int>freq(n*n+1,0);
        
        
        int repeating =-1, missing = -1;




        for(auto row : grid) {

            for(int val : row) {

               freq[val]++;
                
            }
        }


        for(int i = 1; i < freq.size(); i++) {

            if(freq[i]==2)
            repeating=i;
            if(freq[i]==0)
            missing = i;
        }


        return {repeating , missing};
        
    }
};