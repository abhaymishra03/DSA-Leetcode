class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {


        long long totalSum = 0;

        for(int val : nums) 
        totalSum+=val;

        totalSum=totalSum%p;

        cout<<totalSum;


        if(!totalSum)return 0;


        int minSz =nums.size();

        int sum = 0;
        
        unordered_map<int,int>mp;

        mp[0]=-1;



        for(int i = 0 ; i < nums.size(); i++) {


            sum = (sum+nums[i])% p;

            int target = (sum - totalSum + p ) % p;


            if(mp.find(target)!=mp.end()) {

                minSz = min(minSz , i - mp[target]);
            }

            mp[sum]=i;
        }







        return minSz==nums.size()?-1:minSz;
        
    }
};