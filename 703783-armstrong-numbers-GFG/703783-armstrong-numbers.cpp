class Solution {
  public:
    bool armstrongNumber(int n) {
      // code here
      int count = 0;
      int org = n;
      while (n > 0) {
          n/=10;
          count++;
      }
      n = org;
      int sum = 0;
      for(int i=0;i<count;i++){
          int a = n%10;
          sum+=pow(a,count);
          n/=10;
      }
      if(org == sum ) return true;
      return false;
      
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna