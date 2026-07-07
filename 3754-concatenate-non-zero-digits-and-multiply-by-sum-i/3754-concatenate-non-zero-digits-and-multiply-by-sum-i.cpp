class Solution {
public:
    long long sumAndMultiply(int n) {

        int sum = 0 ;
        long long ans = 0;
        long long factor = 1;

        while(n) {

            int rem = n%10;

            sum+=rem;

            if(rem) {

                ans = factor * rem +ans;
                factor*=10;
            }

            n/=10;

        }


        return (long long)ans*sum;
        
    }
};