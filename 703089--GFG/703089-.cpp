class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int m = INT_MIN;
        for (int i = 0 ; i<n ; i++){
            if(arr[i]>m) m=arr[i];
        }
         int smax = INT_MIN;
         for (int i = 0 ; i<n ; i++){
            if( arr[i] >smax  && arr[i]!= m) smax =arr[i];
        }
        
        if(smax == INT_MIN) return -1;
        return smax;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna