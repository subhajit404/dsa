class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols =  grid[0].size();
        // making the every first column 1
        for(int i = 0;i<rows;i++){
            if(grid[i][0]==0){
                for(int j=0;j<cols;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        //flip cols where no 0 > no 1
        for(int j=0;j<cols;j++){
            int n0 = 0;
            int n1 = 0;
            for(int i = 0; i<rows;i++){
                if(grid[i][j] == 0) n0++;
                else n1++;
            }
            if(n0>n1){
                for(int i=0;i<rows;i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else  grid[i][j]=0;
                }
            }
        }
        int sum =0 ;
        for(int i=0 ;i<rows;i++){
            int x= 1;
            for(int j=cols-1;j>=0;j--){
                sum += grid[i][j]*x;
                          x*=2;
            }
  
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna