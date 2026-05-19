class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int res = 1, maxx = INT_MIN;
        for (auto i : nums) {
            pq.push(i);
        }
        if(nums.size()<1){
            return 0;
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] - ans[i - 1] == 1) {
                res += 1;
            } else if (ans[i] - ans[i - 1] == 0) {
                continue;
            } else {
                if (maxx < res) {
                    maxx = res;
                }
                res = 1;
            }
        }
        if (maxx < res) {
            maxx = res;
        }
        return maxx;
    }
};
