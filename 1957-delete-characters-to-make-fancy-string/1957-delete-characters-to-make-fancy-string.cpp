class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string result = "";
        result.push_back(s[0]);
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == result.back()) {
                count++;
                if (count < 3)
                    result.push_back(s[i]);
            }
            else{
                result.push_back(s[i]);
                count=1;
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna