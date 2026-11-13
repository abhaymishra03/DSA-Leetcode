class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int maxOnes = 0;
        int count0 = 0;


        int left = 0 ; 

        for(int right = 0; right < nums.size(); right++) {
            if(nums[right] == 0)
            count0++;

            if(count0<=k){

                maxOnes=max(maxOnes,right-left+1);

            }else {
                if(nums[left]==0)
                count0--;

                left++;
                
                
            }

            

        }     
        return maxOnes;
           
    }
};