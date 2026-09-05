class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        

        unordered_set<int>s;
        vector<int>ans;

        for(int val : nums1)
        s.insert(val);

        for(int val : nums2) {

            if(s.find(val)!=s.end()) {
                ans.push_back(val);
                s.erase(val);
            }
        }

        return ans;
    }
};