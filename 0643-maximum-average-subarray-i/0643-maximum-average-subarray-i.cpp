class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double currSum = 0;

        //first window 

        for(int i = 0 ; i < k ; i++){
            currSum+=nums[i];
        }

       double maxAvg = currSum/k;

        //sliding the window

        for(int i = k ; i < nums.size(); i++) {

            //add next element 

            currSum+=nums[i];

            // remove next element

            currSum-=nums[i-k];

            maxAvg = max(maxAvg, currSum/k);


        }
        return maxAvg;
    }
};