class Solution {
public:
    bool isMonotonic(vector<int>& nums) {


        bool yes = true;
        bool no = true;


        for(int i = 1; i < nums.size(); i++) {


            if(nums[i-1] > nums[i]){
            yes=false;
            
            if(!no)
            break;
            }
            if(nums[i-1] < nums[i] ){
            no=false;
            if(!yes)
            break;
}
        }



        return yes || no;
        
    }
};