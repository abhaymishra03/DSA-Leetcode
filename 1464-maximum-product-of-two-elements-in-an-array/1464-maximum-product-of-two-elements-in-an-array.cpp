class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fMax=INT_MIN,sMax=INT_MIN,idx;
        for(int i=0;i<nums.size();i++){
            if(fMax<nums[i])
            {
                fMax=nums[i];
                idx=i;

            }

        }
          for(int i=0;i<nums.size();i++){
            if(i!=idx)
            sMax=max(sMax,nums[i]);
            

        }
        return (fMax-1)*(sMax-1);

        

        
    }
};