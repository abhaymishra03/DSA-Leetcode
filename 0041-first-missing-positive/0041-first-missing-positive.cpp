class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        vector<int> freq(nums.size() + 1, 0);

        for (int val : nums) {
            if (val > 0 && val <= nums.size())
                freq[val]++;
        }

        for (int i = 1 ; i < freq.size(); i++) {

            if (!freq[i])
                return i;
        }

        return freq.size();
    }
};