class Solution {
public:
    bool isPowerOfFour(int num) {


        unsigned long long n = num;



        bool is2 = ((n&(n-1))==0) && n>0;
        bool is3 = ((n-1)%3==0);
        return is2 & is3;
        // return ((((n&(n-1))==0)&& n>0)&&((n-1)%3==0));
        
    }
};