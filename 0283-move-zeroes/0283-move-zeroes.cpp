class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int k = 0;

        for(int val : nums) {

            if(val!=0)
            nums[k++]=val;
        }

        for(int i = k ; i < nums.size(); i++)
        nums[i]=0;
        
    }
};