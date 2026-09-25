class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {


        stack<int>s;

        vector<int>ans(prices.size(),0);


        for(int i = prices.size()-1; i >=0 ;i--) {

            while(!s.empty() && s.top()>prices[i])
            s.pop();



            if(!s.empty())
            ans[i]=s.top();
            


            s.push(prices[i]);
        }
        for(int i = 0 ; i < prices.size(); i++) {

            prices[i]-=ans[i];
        }

        return prices;
    }
};