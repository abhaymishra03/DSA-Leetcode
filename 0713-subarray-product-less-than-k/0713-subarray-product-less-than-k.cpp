class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int left = 0;
        int ans = 0;
        int prod = 1;
        int n = nums.size();

        for (int right = 0; right < n; right++) {

            prod *= nums[right];

            while (prod >= k && left < n) {

                prod /= nums[left];
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }
};