class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n = nums.size();

        vector<int>ans(n);

        int total = 0;

        for(int val : nums) 
        total+=val;


        int leftSum = 0;

        for(int i = 0 ; i < n ; i++) {

            int rightSum = total - leftSum-nums[i];


            ans[i]=abs(rightSum - leftSum);


            leftSum+=nums[i];


        }

        return ans;
        
    }
};