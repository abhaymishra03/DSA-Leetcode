class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double currSum = 0;

        //first window 
        for(int i = 0 ; i < k ; i++) {

            currSum+=nums[i];
        }


        double maxAvg = currSum/k;

        for(int i = k ; i < nums.size(); i++) {

            // remove last element
            currSum-=nums[i-k];
            // adding new element
            currSum+=nums[i];

            maxAvg = max(maxAvg,currSum/k);

        }

    
        return maxAvg;
    }
};