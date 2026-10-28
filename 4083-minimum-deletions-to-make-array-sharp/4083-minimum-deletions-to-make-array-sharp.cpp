class Solution {
public:
    int minDeletions(vector<int>& nums) {
    int count = 0;

        int first = 0;
        int second = 1;
        

        while(second < nums.size()){


            if(nums[first] == nums[second]) {
                count++;
                
            }
            first++;
                second++;
        }

        return count;
    }
};