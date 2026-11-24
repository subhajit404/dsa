class Solution {
  public:
  int power(int a,int b){
      int n = a;
      for(int i=0;i<b-1;i++){
          a =a*n;
      }
      return a;
  }
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
          sum+=power(a,count);
          n/=10;
      }
      if(org == sum ) return true;
      return false;
      
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna