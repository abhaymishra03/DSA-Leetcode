class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {


        vector<int> ans;

        unordered_map<int,int>mp;

        for(int val : nums1)
        mp[val]++;
        for(int val : nums2) {

            if(mp.find(val)!=mp.end()){

                ans.push_back(val);

                mp[val]--;

                if(mp[val]==0)
                mp.erase(val);
            }
        }

        return ans;
        
    }
};