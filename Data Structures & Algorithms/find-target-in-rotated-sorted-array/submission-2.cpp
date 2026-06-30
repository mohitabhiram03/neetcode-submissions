class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int m;
        int idx = 0;

        while (l < r) {
            m = l + (r - l) / 2;
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        idx = l;

        l = 0, r = n - 1;
        if (target >= nums[idx] && target <= nums[r]) {
            l = idx;
        } else{
            r = idx - 1;
        }

        while (l <= r) {
            m = l + (r - l) / 2;
            if (nums[m] == target) {
                return m;
            }
            if (target < nums[m]) {
                r = m - 1;
            } else {
                l = m+1;
            }
        }
        return -1;
    }
};
