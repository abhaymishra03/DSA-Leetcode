class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int count = 0 ;
        int currSum = 0;

        unordered_map<int,int>mp;

        mp[0]=1;

        for(int i = 0 ; i < nums.size(); i++) {

            currSum+=nums[i];
            int rem =currSum%k;

            if(rem < 0)
            rem= rem+k;

            if(mp[rem]) {
                count+=mp[rem];
            }

            
            mp[rem]++; 
           
        }


        return count;
        
    }
};