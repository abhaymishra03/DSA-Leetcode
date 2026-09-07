class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {

        unordered_map<string, int> mp;

        for (int i = 0; i < list1.size(); i++) {
            mp[list1[i]] = i;
        }

        unordered_map<string, int> mp1;

        int minIdx = INT_MAX;

        for (int i = 0; i < list2.size(); i++) {

            if (mp.find(list2[i]) != mp.end()) {
                int currIdx = i + mp[list2[i]];
                mp1[list2[i]] = currIdx;

                minIdx = min(minIdx, currIdx);
            }
        }

        vector<string> ans;

        for (auto& it : mp1) {

            if (minIdx == it.second)
                ans.push_back(it.first);
        }
        return ans;
    }
};