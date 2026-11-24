class Solution {
public:
    void rotate(vector<vector<int>>& mat, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        int i = 0, j = n - 1;
        while (i < j) {
            for (int k = 0; k < n; k++) {
                swap(mat[k][i], mat[k][j]);
            }
            i++;
            j--;
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();

        for (int a = 0; a < 4; a++) {
            bool flag = true;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i][j] != target[i][j]){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == true ) return true;
            rotate(mat,n);
               
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna