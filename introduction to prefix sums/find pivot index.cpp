class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int n = nums.size(), right = 0;
            for (int i = 0; i < n; i++) {
                right += nums[i];
            }
            
            int left = 0;
            for (int i = 0; i < n; i++) {
                right -= nums[i];
                if (left == right) {
                    return i;
                }
                left += nums[i];
            }
            
            return -1;
        }
};