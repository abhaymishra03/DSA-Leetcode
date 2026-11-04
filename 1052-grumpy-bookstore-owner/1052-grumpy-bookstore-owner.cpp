class Solution {
public:
    int maxSatisfied(vector<int>& nums, vector<int>& grumpy, int k) {

        int currBen = 0;
        int total = 0;

        // first window

        for (int i = 0; i < k; i++) {

            if (grumpy[i])
                currBen += nums[i];
            else
                total += nums[i];
        }

        int maxBen = currBen;

        for (int i = k; i < nums.size(); i++) {

            if (grumpy[i - k])
                currBen -= nums[i - k];

            if (grumpy[i])
                currBen += nums[i];
            else
                total += nums[i];

            maxBen = max(maxBen, currBen);
        }

        return maxBen + total;
    }
};