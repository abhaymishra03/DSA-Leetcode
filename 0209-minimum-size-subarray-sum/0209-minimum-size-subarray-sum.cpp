class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minSize = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                minSize = min(minSize, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return minSize == INT_MAX ? 0 : minSize;
    }
};