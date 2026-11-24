class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;
        int minr = 0, maxr = m - 1, minc = 0, maxc = n - 1;
        while (minr <= maxr && minc <= maxc) {
            // Right
            for (int i = minc; i <= maxc; i++) {
                v.push_back(matrix[minr][i]);
            }
            minr++;
            if (minr > maxr || minc  > maxc)
                break;
            // Down
            for (int i = minr; i <= maxr; i++) {
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
             if (minr > maxr || minc  > maxc)
                break;
            // Left
            for (int i = maxc; i >= minc; i--) {
                v.push_back(matrix[maxr][i]);
            }
            maxr--;
             if (minr > maxr || minc  > maxc)
                break;
            // Up
            for (int i = maxr; i >= minr; i--) {
                v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna