class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        int sum = 0 ;
        for(int i=0;i<m;i++){
            for(int j = 0 ;j<n;j++){
                sum+=mat[i][j];
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna