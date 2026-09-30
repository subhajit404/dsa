class Solution {
public:
    int missingNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int i =0;
     int n =nums.size();
     for(i= 0; i<n; i++){
        if (nums[i]!=i) break;
     }
     return i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna