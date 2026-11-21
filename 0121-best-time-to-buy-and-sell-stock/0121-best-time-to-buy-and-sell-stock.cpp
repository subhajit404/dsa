class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy_p = 0;
        int cur_max = 0;
        int max_p = 0;
        int i = 0;

        buy_p = prices[i];

        while (i < n - 1) {
            if (buy_p > prices[i + 1]) {
                buy_p = prices[i + 1];
                i++;
            } 
            else if (buy_p <= prices[i + 1]) {
                cur_max = prices[i + 1] - buy_p;
                i++;
            }

            if (cur_max > max_p) {
                max_p = cur_max;
            }
        }
        return max_p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna