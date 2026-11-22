class Solution {
	public:
	vector<vector<int>> multiply(vector<vector<int>> & mat1, vector<vector<int>> & mat2) {
		// Code here
		
		int n = mat1.size();
		vector<vector<int>> mat(n, vector<int>(n));
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<n; j++) {
				for (int k = 0; k<n; k++) {
					mat[i][j] += mat1[i][k]*mat2[k][j];
				}
			}
		}
		return mat;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna