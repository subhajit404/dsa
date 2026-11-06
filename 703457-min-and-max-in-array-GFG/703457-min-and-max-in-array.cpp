class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min = INT_MAX;
        int max = INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++ ){
            if(arr[i] >max) max = arr[i];
            if(arr[i] <min) min =arr[i];
            
        }
        return {min,max};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna