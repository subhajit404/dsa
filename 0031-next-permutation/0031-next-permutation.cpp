class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pvt = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pvt = i;
                break;
            }
        }
        if (pvt == -1) {
            reverse(nums.begin(), nums.end());
            return;
        } else {
            reverse(nums.begin() + pvt + 1, nums.end());
            int j=-1;
            for (int i = pvt + 1; i < n; i++) {
                if (nums[i] > nums[pvt]) {
                    j = i;
                    break;
                }
            }
            swap(nums[pvt], nums[j]);
        }
    }
};