class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0 ,right = m*n-1;


        while(left <= right) {

            int mid = left + (right-left)/2;


            int i = mid/m,j=mid%m;


            if(matrix[i][j]==target)
            return true;
            else if(matrix[i][j]>target)
            right = mid-1;
            else 
            left = mid+1;
        }
        return false;
    }
};