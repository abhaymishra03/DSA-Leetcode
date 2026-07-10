class Solution {
public:
    int reverseBits(int n) {

       int it = 32;
       int ans = 0;

       while(it--) {
        int last = n & 1;

        ans = ans << 1 ;
        ans = ans | last;
        n>>=1;
       }

       return ans;
        
    }
};