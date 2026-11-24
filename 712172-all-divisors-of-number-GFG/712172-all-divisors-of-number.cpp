
class Solution {
public:
    vector<int> getDivisors(int n) {
        vector<int> v;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                v.push_back(i);

                if (i != n / i) {
                    v.push_back(n / i);
                }
            }
        }

        sort(v.begin(), v.end());

        return v;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna