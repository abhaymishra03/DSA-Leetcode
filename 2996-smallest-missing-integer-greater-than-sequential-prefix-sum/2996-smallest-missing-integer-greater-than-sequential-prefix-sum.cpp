class Solution {
public:
    int missingInteger(vector<int>& nums) {

        unordered_map<int, int> mp;

        // Store all numbers
        for (int x : nums) {
            mp[x]++;
        }

        // Find sum of sequential prefix
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

        // Find smallest missing number >= sum
        while (mp.count(sum)) {
            sum++;
        }

        return sum;
    }
};