class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        vector<int> v(n);
        int a = 0;
        int b = n / 2;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0){
                v[i] = nums[b];
                b++;
                }
            else{
                v[i]= nums[a];
                a++;
                }
            // v.push_back(nums[i+3]);
            // v.push_back(nums[i]);
        }
        nums = v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna