class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        int st = 0, end = nums.size() - 1;

        while (st + 1 < nums.size() && nums[st] <= nums[st + 1])
            st++;

        while (end - 1 >= 0 && nums[end] >= nums[end - 1])
            end--;

        if (st == nums.size() - 1)
            return 0;

        int wMax = INT_MIN;
        int wMin = INT_MAX;

        for (int i = st ; i <=end ; i++) {

            wMax = max(wMax, nums[i]);
            wMin = min(wMin, nums[i]);
        }

        while (st - 1 >= 0 && wMin < nums[st - 1])
            st--;

        while (end + 1 < nums.size() && wMax > nums[end + 1])
            end++;

        return end - st + 1;
    }
};