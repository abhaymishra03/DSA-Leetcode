class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left = 0, right = 0;

        int n = nums.size();
        int count0 = 0, maxOnes=0;


        while(right < n) {

            if(nums[right]==0) {
                count0++;
            } 
            if(count0<=k) {

                maxOnes=max(maxOnes,right-left+1);

            }
            
            else {
                if(nums[left]==0)
                count0--;

                left++;
            }

            right++;
        }
        return maxOnes;
    }
};