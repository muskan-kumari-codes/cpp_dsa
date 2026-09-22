class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = prices[0];
        int profit = 0;
        for(int i=1; i<n; i++){
            int curr_profit = prices[i] - min_price;
            if(curr_profit>profit) profit = curr_profit;
            min_price = min(min_price,prices[i]);
        }
        
        return profit;
    }
};
