class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int ans = INT_MAX;
        int closest = INT_MAX;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if(i > 0 && nums[i-1]==nums[i])continue;
            int j = i + 1;
            int k = n - 1;

        

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < closest) {
                    closest = abs(sum - target);
                    ans = sum;
                }

                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {

                    return target;
                }
            }
        }
        return ans;
    }
};