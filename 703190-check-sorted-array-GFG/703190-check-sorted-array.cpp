class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool flag =true ;
        int n = arr.size();
        int pre  = arr[0];
        for(int i= 1;i<n;i++){
            if (pre <=arr[i]) flag = true ;
            else{
                flag = false;
                break;
            }
            
            pre = arr[i];
        }
        return flag;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna