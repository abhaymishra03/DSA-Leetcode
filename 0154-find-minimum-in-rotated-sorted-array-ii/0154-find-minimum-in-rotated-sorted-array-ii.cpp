class Solution {
public:
    int findMin(vector<int>& nums) {

        int minEl = INT_MAX;


        for(int val : nums)
        minEl= min(minEl,val);


        return minEl;
        
    }
};