class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        queue<char> q;
        int maxx = 0;
        char c;
        for (auto& i : s) {
            if (seen.find(i) != seen.end()) {
                while (seen.count(i)) {
                    c = q.front();
                    maxx = max(maxx, (int)seen.size());
                    q.pop();
                    seen.erase(c);
                }
                seen.insert(c);
                q.push(c);
                continue;
            }
            seen.insert(i);
            q.push(i);
        }
        maxx = max(maxx, (int)seen.size());
        return maxx;
    }
};
