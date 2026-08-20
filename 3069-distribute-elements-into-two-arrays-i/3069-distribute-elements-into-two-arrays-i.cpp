class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector<int> arr1={nums[0]};
        vector<int> arr2={nums[1]};
        int i = 2;

        while (i < nums.size()) {

            
            if(arr1.back()>arr2.back()) {
                arr1.push_back(nums[i++]);
            } else{

                arr2.push_back(nums[i++]);

            }
        }
       
       for(auto it : arr2)
       arr1.push_back(it);

       return arr1;
        
    }
};