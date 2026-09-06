class Solution {
public:
    int longestConsecutive(vector<int>& nums) {



        unordered_set<int>s(nums.begin(),nums.end());



        int maxLen = 0;
      


        for(auto& it : s) {

            if(s.contains(it-1))
            continue;


            int num = it;
            int len = 1;

            while(s.contains(num+1)) {

                num++;
                len++;

            }

            maxLen=max(maxLen,len);
        }
        return maxLen;
    }
};