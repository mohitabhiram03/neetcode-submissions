class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        int i = 0;
        while (nums[i] <= 0 && i < n - 1) {
            if (i > 0 && nums[i - 1] == nums[i]) {
                i++;
                continue;
            }
            int j = i + 1, k = n - 1;
            while (j < k) {
                int t = nums[i] + nums[j] + nums[k];
                if (t == 0) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (nums[j] == nums[j - 1] && j < k) {
                        j++;
                    }
                } else if (t < 0) {
                    j++;
                } else if (t > 0) {
                    k--;
                }
            }
            i++;
        }
        return res;
    }
};

