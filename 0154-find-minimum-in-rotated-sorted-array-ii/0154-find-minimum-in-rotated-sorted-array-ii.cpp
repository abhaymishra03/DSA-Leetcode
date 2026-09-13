class Solution {
public:
    int findMin(vector<int>& nums) {

        int st = 0, end = nums.size() - 1;
        int minEl = INT_MAX;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (nums[st] == nums[mid] && nums[end] == nums[mid]) {
                minEl = min(minEl, nums[st]);
                st++;
                end--;
                continue;
            }

            if (nums[st] <= nums[mid]) {

                minEl = min(minEl, nums[st]);
                st = mid + 1;

            } else {

                minEl = min(minEl, nums[mid]);
                end = mid - 1;
            }
        }

        return minEl;
    }
};