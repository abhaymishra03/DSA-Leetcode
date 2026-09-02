class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int maxEl = INT_MIN;
        int maxIdx = 0;
        int minEl = INT_MAX;
        int minIdx = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (maxEl < nums[i]) {
                maxEl = nums[i];
                maxIdx = i + 1;
            }
            if (minEl > nums[i]) {
                minEl = nums[i];
                minIdx = i + 1;
            }
        }


        int deletion = 0;

        int diff =abs(maxIdx-minIdx);

        minIdx = min(minIdx, n - minIdx + 1);
        maxIdx = min(maxIdx, n - maxIdx + 1);
       
        
        cout<<diff;

        deletion += min(minIdx, maxIdx);

        if (minIdx < maxIdx) {
            deletion += min(diff, maxIdx);
        } else {
            deletion += min(diff, minIdx);
        }

        return deletion;
    }
};