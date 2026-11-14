class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_set<int>s;


        int left = 0;
        int currSum = 0 , maxSum = INT_MIN;


        for(int right = 0 ; right < nums.size(); right++) {

            currSum+=nums[right];


            while(s.find(nums[right])!=s.end()) {

                currSum-=nums[left];
                s.erase(nums[left]);
                left++;

            }

            s.insert(nums[right]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};