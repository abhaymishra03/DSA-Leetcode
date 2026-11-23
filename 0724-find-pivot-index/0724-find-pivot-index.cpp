class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int left = 0,sum =0;



        for(int val : nums)
        sum+=val;



        for(int i = 0; i < nums.size();i++) {

            int right = sum - left - nums[i];


            if(left == right)

            return i;

            left+=nums[i];
        }
        
        return -1;
    }
};