class Solution {
public:
    int searchInsert(vector<int>& nums, int key) {

   

    int st = 0, end = nums.size()-1,mid;

    while(st<=end) {

        mid = st +(end-st)/2;

        if(nums[mid]==key){
            return mid;
        }
        else if(nums[mid]>key){
            //left side
            end = mid - 1;

        }
        else {
            //right side

            st = mid +1;
        }



    }



    return st;

        
    }
};