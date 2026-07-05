class Solution {
public:
    int minStartValue(vector<int>& nums) {

        int runningSum = 0;
        int minRS = 0 ;
        

        for(int i = 0; i < nums.size() ; i++ ) {

            runningSum+= nums[i];

            minRS=min(minRS,runningSum);

            

        }
    return 1-minRS;

    }
};