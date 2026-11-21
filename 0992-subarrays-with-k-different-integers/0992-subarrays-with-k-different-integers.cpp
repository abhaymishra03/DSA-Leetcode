class Solution {
public:

    int func(vector<int>& nums, int k) {
        int count =0;

        unordered_map<int,int>mp;
        int left =0;



        for(int right = 0 ; right < nums.size();right++) {

            mp[nums[right]]++;

            while(mp.size() > k) {

                mp[nums[left]]--;


                if(mp[nums[left]]==0)
                mp.erase(nums[left]);

                left++;


            }
            count+=(right-left+1);

        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {


        return func(nums,k)-func(nums,k-1);
        

    }
};