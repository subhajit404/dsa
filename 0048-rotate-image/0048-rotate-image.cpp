class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j = i ;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int i=0,j=n-1;
        while(i<j){
            for(int k= 0;k<n;k++){
                swap(matrix[k][i],matrix[k][j]);
            }
            i++;
            j--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna