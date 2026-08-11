class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int minEl;
        int maxEl;
        minEl = nums[0];
        maxEl = nums[k - 1];

        int minDiff = maxEl - minEl;

        for (int i = k; i < nums.size(); i++) {

            // add first element
            maxEl = nums[i];
            minEl = nums[i - k + 1];

            minDiff = min(minDiff, maxEl - minEl);
        }
        return minDiff;
    }
};