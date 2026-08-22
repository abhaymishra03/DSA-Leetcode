class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int sum = 0 ;

        for(int val : nums) {
            sum+=val;
        }
        if(sum<x)return-1;

        int k = sum - x;

        int left = 0;
        int longest = INT_MIN;
        int currSum = 0;

        for(int right = 0 ; right < nums.size();right++) {

            currSum+=nums[right];

            while(currSum>k) {
                currSum-=nums[left];
                left++;
            }

            if(currSum==k)

            longest = max(longest,right-left+1);


        }

        return longest==INT_MIN?-1:nums.size()-longest;





        
    }
};