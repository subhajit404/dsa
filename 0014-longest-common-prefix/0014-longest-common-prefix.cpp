class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1)
            return strs[0];
        sort(strs.begin(), strs.end());
        string first_s = strs[0];
        string last_s = strs[n - 1];
        string s = "";
        for (int i = 0; i < min(first_s.size(), last_s.size()); i++) {
            if (first_s[i] == last_s[i])
                s += first_s[i];
            else
                return s;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna