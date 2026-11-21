class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_p = prices[0];
        int n = prices.size();
        int profit = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < buy_p)
                buy_p = prices[i];
            else {
                int current_p = prices[i] - buy_p;
                // profit = max(current_p, profit);
                if (current_p >profit ) profit = current_p;
            }
        }
        return profit;
    }
};