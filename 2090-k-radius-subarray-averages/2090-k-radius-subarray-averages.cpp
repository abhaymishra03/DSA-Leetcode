class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);

        if (n < 2 * k + 1) return ans;

        long long windowSum = 0;
        for (int i = 0; i <= 2 * k; i++) {
            windowSum += nums[i];
        }

        for (int i = k; i < n - k; i++) {
            ans[i] = windowSum / (2 * k + 1);

            if (i + k + 1 < n) {
                windowSum -= nums[i - k];
                windowSum += nums[i + k + 1];
            }
        }
        return ans;
    }
};