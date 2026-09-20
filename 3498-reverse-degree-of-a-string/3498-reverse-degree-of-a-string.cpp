class Solution {
public:
    int reverseDegree(string s) {

        int sum = 0;

        for(int i = 1; i <= s.size(); i++) {

            int rev = 26-(s[i-1]-'a');
            sum+= rev*i;
        }
        return sum;
    }
};