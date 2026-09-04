class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,pair<int,int>>mp;


        // num,idx,count
        
        for(int i = 0 ; i < nums.size(); i++) {

            mp[nums[i]].second++;


            if(mp[nums[i]].second>1 && abs(mp[nums[i]].first-i)<=k)
            return true;


            mp[nums[i]].first=i;
            
        }
        return false;
        
    }
};