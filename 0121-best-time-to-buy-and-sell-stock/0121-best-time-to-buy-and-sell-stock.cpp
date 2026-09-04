class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bestBuy = prices[0];
        int maxProf = 0;


        for(int cost : prices) {

            bestBuy = bestBuy > cost ? cost : bestBuy;

            maxProf = max(maxProf , cost-bestBuy);
        }

        return maxProf;
    }
};