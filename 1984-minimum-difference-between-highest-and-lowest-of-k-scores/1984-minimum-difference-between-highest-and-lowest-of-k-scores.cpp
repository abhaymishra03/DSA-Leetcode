class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int minEl = nums[0];
        int maxEl = nums[k - 1];
        int minimizedScore = maxEl - minEl;

        // first window

        for (int i = k; i < nums.size(); i++) {

            minEl = nums[i - k + 1];
            maxEl = nums[i];

            minimizedScore = min(minimizedScore, maxEl - minEl);
        }

        return minimizedScore;
    }
};