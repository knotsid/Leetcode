class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //considering minimum price as arr[0]
        int mini = prices[0];
        int maxProfit = 0;
        int n = prices.size();
        for(int i=1;i<n;i++){
            //cost btw sell - buy
            int cost = prices[i] - mini;
            //maintaining non negative profit 
            maxProfit = max(maxProfit, cost);
            //tracking minimum from arr[0] to i position as we are dealing with
            //only one index at a time so we keep track of mini value to buy on
            //cheapest day
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};