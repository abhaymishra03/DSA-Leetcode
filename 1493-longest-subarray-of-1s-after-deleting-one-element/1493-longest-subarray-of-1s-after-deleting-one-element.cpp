class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int longest = 0;
        int left = 0;
        unordered_map<int,int>mp;


        for(int right = 0; right < nums.size(); right++) {

            mp[nums[right]]++;

            while(mp[0]>=2) {
                mp[nums[left]]--;
                left++;
            }

            longest = max(longest,right-left);
        }

        return longest ;
        
    }
};