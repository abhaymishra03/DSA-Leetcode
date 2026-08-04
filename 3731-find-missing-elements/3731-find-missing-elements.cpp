class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        unordered_map<int,int>mp;
        int lower = INT_MAX, upper = INT_MIN;

        for(int val : nums){
            mp[val]++;

            lower = min(lower,val);
            upper = max(upper,val);
        }

        vector<int>ans;

        for(int i = lower; i <= upper; i++) {

            if(mp[i]==0){
                ans.push_back(i);
            }
        }

    return ans;
        
    }
};