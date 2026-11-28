class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {


        vector<int>ans(nums.size(),0);


        int leftSum = 0;


        int totalSum = 0;

        for(int val : nums)
        totalSum+=val;


        for(int i = 0; i < nums.size();i++) {
            int rightSum = totalSum - leftSum-nums[i];

            ans[i]=abs(rightSum-leftSum);


            leftSum+=nums[i];
        }


        return ans;
        
    }
};