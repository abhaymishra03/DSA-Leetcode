class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int currSum = 0 ;
        int count = 0;

        unordered_map<int,int>mp;

        mp[0]=1;

        for(int i = 0 ; i < nums.size(); i++) {


            currSum+=nums[i];

            if(mp.find(currSum - k )!=mp.end()) {
                count=count+mp[currSum-k];
            } 
            if(mp.find(currSum)!=mp.end()) {
                mp[currSum]++;
            } else {
                mp[currSum]=1;
            }
            


        }


        return count;
        
    }
};