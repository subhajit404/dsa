class Solution {
  public:
    vector<int> primeRange(int l, int r) {
      // code here
      vector<int> result;

      for (int n = l; n <= r; n++) {
        if (n < 2)
          continue;

        bool isPrime = true;

        for (int i = 2; i <= n / i; i++) {
          if (n % i == 0) {
            isPrime = false;
            break;
          }
        }

        if (isPrime) {
          result.push_back(n);
        }
      }

      return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna