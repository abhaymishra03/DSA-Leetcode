class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int sum = 0;
        // first window
        for (int i = 0; i < k; i++) {

            sum += arr[i];
        }

        int count = 0 ;
        if(sum/k >= threshold) count++;

        // sliding the window

        for (int i = k; i < arr.size(); i++) {

            // add next element

            sum += arr[i];

            // remove first element

            sum -= arr[i - k];

            if(sum/k >= threshold) count++;

        
        }

        return count;
    }
};