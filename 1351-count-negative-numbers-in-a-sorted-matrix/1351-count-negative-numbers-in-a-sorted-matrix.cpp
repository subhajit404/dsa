class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        int count = 0 ;
        for(int i=0;i<m;i++){
            for(int j = 0 ;j<n;j++){
                if(grid[i][j]<0) count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna