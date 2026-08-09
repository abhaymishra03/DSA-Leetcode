class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        if (nums.size() <= 1)
            return nums;

        int pos = 0, neg = 1, i = 0;

        vector<int> ans(nums.size());

        while (i < nums.size()) {

            if (nums[i] >= 0) {

                ans[pos] = nums[i];
                pos += 2;
            } else {
                ans[neg] = nums[i];
                neg += 2;
            }
            i++;
        }
        return ans;
    }
};