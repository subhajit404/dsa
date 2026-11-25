class Solution {
  public:
    string firstAlphabet(string &s) {
      // code here
      string x = "";
      x=s[0];
      int n = s.length();
      for (int i = 0; i < n; i++) {
        if ((int)s[i] == 32)
          x+=s[i+1];
        else
          continue;
      }
      return x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna