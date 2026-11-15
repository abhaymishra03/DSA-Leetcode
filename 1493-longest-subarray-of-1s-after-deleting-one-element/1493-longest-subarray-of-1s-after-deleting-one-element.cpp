class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int count0=0;

        int left = 0;
        int maxLen =INT_MIN;


        for(int right = 0 ; right < nums.size();right++) {

            if(nums[right]==0)
            count0++;

            while(count0 >1) {

                if(nums[left]==0)
                count0--;

                left++;
            }

            maxLen = max(maxLen,right-left);

        }

        return maxLen;
        
    }
};