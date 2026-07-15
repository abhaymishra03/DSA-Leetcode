class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int oddSum =0,evenSum=0;
        int num =1;

        for(int i = 0 ; i <n; i++) {

            oddSum+=num;

            evenSum+=(num+1);

            num+=2;


        }

        return gcd(oddSum, evenSum);
    }
};