class Solution {
public:
    int largestAltitude(vector<int>& nums) {


        int alt = 0;

        int highAlt = 0;

        for(int val : nums){

            alt+=val;


            highAlt=max(highAlt,alt);
        }

        return highAlt;
    }
};