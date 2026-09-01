class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int,int>mp;
        int sum = 0;
        int maxLen = 0;



        for(int i = 0 ; i < nums.size(); i++) {
            
            sum = nums[i]?sum+1:sum-1;


            if(mp.find(sum)!=mp.end()){
                maxLen = max(maxLen,i-mp[sum]);
            } else{
                mp[sum]=i;
            }

            if(sum == 0) 
            maxLen = i+1;
            
        }

        return maxLen;
        
    }
};