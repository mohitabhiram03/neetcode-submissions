class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n - 1;
        int maxx = INT_MIN;
        while (l < r) {
            int temp;
            if (heights[l] < heights[r]) {
                temp = (r - l) * heights[l];
                l++;
            } else if (heights[l] > heights[r]) {
                temp = (r - l) * heights[r];
                r--;
            } else {
                temp = (r - l) * heights[r];
                l++;
                r--;
            }
            if (temp > maxx) {
                maxx = temp;
            }
        }
        return maxx;
    }
};
