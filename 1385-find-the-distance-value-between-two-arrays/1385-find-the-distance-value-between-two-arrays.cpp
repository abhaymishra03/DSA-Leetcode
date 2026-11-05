class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int i = 0, j = 0;
        int count = arr1.size();

        for (; i < arr1.size(); i++) {

            j = 0;
            while (j < arr2.size()) {

                if (abs(arr1[i] - arr2[j]) <= d) {
                    count--;
                    break;
                }

                j++;
            }
        }

        return count;
    }
};