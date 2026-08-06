class Solution {
public:

    int extractProd(int n){

        int prod = 1;
        while(n > 0) {

            prod*= n%10;
            n/=10;

        }
        return prod ;
    }
    int smallestNumber(int n, int t) {

        int prod;

        while(n){

            prod = extractProd(n);

            if(prod % t ==0)
            break;

            n++;
        }

        return n;
        
    }
};