class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        vector<int>ans;

        auto lowerB = lower_bound(nums.begin(),nums.end(),target);
        auto upperB = upper_bound(nums.begin(),nums.end(),target);

        for(auto it = lowerB ; it <upperB; it++) {

            ans.push_back(it-nums.begin());


        }

        return ans;
        
    }
};