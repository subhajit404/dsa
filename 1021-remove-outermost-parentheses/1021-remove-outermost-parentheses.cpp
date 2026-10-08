class Solution {
public:
    string removeOuterParentheses(string& s) {
        int balance=0, j=0;
        for(char c: s){
            balance+=1-((c-'(')<<1);
            s[j]=c;
            j+=!(balance+c-'('==1);
        }
        s.resize(j);
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna