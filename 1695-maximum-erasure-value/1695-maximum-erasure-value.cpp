class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int left = 0 ;
        int currScore = 0;
        int maxScore = 0;

        unordered_map<int,int>mp;


        for(int right = 0 ; right < nums.size(); right++){

            mp[nums[right]]++;

            currScore+=nums[right];

            while(mp[nums[right]]>1) {

                currScore-=nums[left];
                mp[nums[left]]--;

                left++;
            }

            maxScore = max(maxScore , currScore);
        }

        return maxScore;
        
    }
};