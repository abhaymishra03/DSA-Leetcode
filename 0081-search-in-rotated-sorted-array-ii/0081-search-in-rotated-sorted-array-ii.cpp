class Solution {
public:
    bool search(vector<int>& nums, int k) {


        


        int left = 0 , right = nums.size()-1;


        while(left <= right ) {

            int mid = left + (right - left)/2;
            if(nums[mid]==k)return true;

            if(nums[left]==nums[mid] && nums[mid]==nums[right]) {
                left++;
                right--;
                continue;
            }


            //left sorted 

            if(nums[left]<=nums[mid]) {

                if(nums[left]<=k && k<= nums[mid]){
                    right = mid-1;
                } else {
                    left = mid+1;
                }
            } else{

                if(nums[mid]<=k && k<= nums[right]) {
                    left = mid +1;
                } else{
                    right = mid-1;
                }
            } 

        }
        return false;
        
    }
};