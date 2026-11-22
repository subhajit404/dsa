class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = nums[0];
        int count = 1;
        for(int i=1; i <n;i++ ){
            if(count == 0 ){
                maj  = nums[i];
                count ++;
            }
            else if(nums[i] == maj ){
                count ++;
            }
            else{
                count --;
            }
        }
        return maj;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna