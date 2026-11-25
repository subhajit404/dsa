class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string x= "";
        int n =s.length();
        for(int i=0;i<n;i++){
            if((int)s[i]==32) continue;
            else x+=s[i];
        }
        return x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna