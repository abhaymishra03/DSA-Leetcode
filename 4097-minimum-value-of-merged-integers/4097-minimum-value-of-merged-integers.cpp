class Solution {
public:
    int minMergedInteger(vector<int>& nums) {

        int minMerge = INT_MAX;

        for (int i = 0; i < nums.size() - 1; i += 2) {

            minMerge = min(minMerge,
                           stoi(to_string(nums[i]) + to_string(nums[i + 1])));
        }
        return minMerge;
    }
};