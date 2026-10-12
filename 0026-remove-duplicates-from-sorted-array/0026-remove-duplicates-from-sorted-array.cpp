class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int first = 1;


        for(int second = 1; second < nums.size(); second++) {


            if(nums[second]!=nums[first-1]) {
                nums[first++]=nums[second];
            }
        }

       return first;
    }
};