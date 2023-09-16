class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit=0;
        int n=arr.size();
        int min_price=INT_MAX;
        for(int i=0;i<n;i++){
            min_price=min(min_price,arr[i]);
            profit=max(profit, arr[i]-min_price);
        }
        return profit;
    }
};