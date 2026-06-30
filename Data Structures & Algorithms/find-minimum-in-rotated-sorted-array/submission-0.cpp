class Solution {
   public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int minn = nums[0];
        int m = 0;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (nums[l] < nums[r]) {
                return min(minn, nums[l]);
            }
            minn = min(minn, nums[m]);
            if (nums[l] <= nums[m])
             { l = m + 1; }
            else {
                r = m - 1;
            }
        }
        return minn;
    }
};
