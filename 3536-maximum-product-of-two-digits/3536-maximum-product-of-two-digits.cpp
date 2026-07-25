class Solution {
public:
    int maxProduct(int n) {

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        while (n) {
            int x = n%10;
            if (x >= largest) {
                secondLargest = largest;
                largest = x;
            } else if (x > secondLargest && x != largest) {
                secondLargest = x;
            }

            n/=10;
        }

        return secondLargest *largest ;
    }
};