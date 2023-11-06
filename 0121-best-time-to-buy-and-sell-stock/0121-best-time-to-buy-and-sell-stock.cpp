class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0; i<n; i++){
            // maintaining the lowest price to buy at
            minPrice = min(minPrice, prices[i]);
            // maintaining the max profit possible
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};