class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int zero = 0;
        int nonZero = 0;

        int n = arr.size();

        while (zero < n && nonZero < n) {

            if (arr[zero] == 0 && arr[nonZero] != 0 && zero < nonZero) {
                swap(arr[zero], arr[nonZero]);
                zero++;
                nonZero++;
            } else if (arr[zero] != 0 && arr[nonZero] != 0)
                zero++;
            else
                nonZero++;
        }
    }
};