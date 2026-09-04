class Solution {
public:
    int singleNumber(vector<int>& nums) {


        int exor = 0;

        for(int val : nums) 
        exor^=val;

        return exor;
        
    }
};