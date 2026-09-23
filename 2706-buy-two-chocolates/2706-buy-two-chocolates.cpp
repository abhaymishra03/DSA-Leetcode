class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        int small = INT_MAX,sSmall = INT_MAX;


        for(int val : prices) {

            if(small > val) {

                sSmall = small;
                small = val;
            } else if(sSmall > val) {
                sSmall = val;
            }
        }

        if(money-small-sSmall < 0)
        return money;



        return money-small-sSmall;

    }
};