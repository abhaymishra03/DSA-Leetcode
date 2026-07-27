class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector<int>ans(nums.size());
     int st = 0, end = nums.size()-1;
     int k = nums.size()-1;

     while(st <= end ) {
        if(nums[st]*nums[st]>nums[end]*nums[end]){
            ans[k--]=nums[st]*nums[st];
            st++;
        } else {
            ans[k--]=nums[end]*nums[end];
            end--;
        }
     }  

     return ans;
    }
};