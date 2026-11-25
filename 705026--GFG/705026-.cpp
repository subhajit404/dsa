class Solution {
  public:
    vector<int> primeRange(int l, int r) {
      // code here
      vector<int> result;

      for (int i = l; i <= r; i++) {
        if (i < 2)
          continue;

        bool isPrime = true;

        for (int j = 2; j <= i / j; j++) {
          if (i % j == 0) {
            isPrime = false;
            break;
          }
        }

        if (isPrime) {
          result.push_back(i);
        }
      }

      return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna