class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 0 || num == 1)return true;

        int st = 0 , end = num /2;



        while(st <= end) {


            long long mid = st + (end - st)/2;

            if(mid*mid == num) return true;

            else if(mid*mid< num)
            st = mid+1;
            else 
            end = mid-1;
        }


        return false;
    }
};