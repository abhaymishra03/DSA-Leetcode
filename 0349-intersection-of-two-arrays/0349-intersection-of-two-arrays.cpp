class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,bool>mp;

        vector<int>ans;


        for(int val : nums1)
        mp[val]=true;

        for(int val : nums2) {

            if(mp.find(val)!=mp.end())
            mp[val]=false;
        }

        for(auto it : mp) 
        if(!it.second)
        ans.push_back(it.first);


        return ans;
        
    }
};