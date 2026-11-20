class Solution {
public:
    bool isMonotonic(vector<int>& nums) {


        bool yes = true;
        bool no = true;


        for(int i = 1; i < nums.size(); i++) {


            if(nums[i-1] > nums[i] )
            yes=false;
            if(nums[i-1] < nums[i] )
            no=false;

        }



        return yes || no;
        
    }
};