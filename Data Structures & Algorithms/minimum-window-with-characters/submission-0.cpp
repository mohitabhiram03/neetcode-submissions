class Solution {
   public:
    string minWindow(string s, string tm) {
        unordered_map<char, int> mp;
        for (auto& c : tm) {
            mp[c]++;
        }
        if (s.size() < tm.size()) {
            return "";
        }
        int n = s.size();
        unordered_map<char, int> t;
        string temp = "";
        string res = "";
        int minn = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) == mp.end()) {
                continue;
            }
            t = mp;
            int j = i;
            while (j < n) {
                if (t.find(s[j]) != t.end()) {
                    t[s[j]]--;
                    if (t[s[j]] == 0) {
                        t.erase(s[j]);
                    }
                }
                temp+=s[j];
                if (t.empty()) {
                    if (temp.size() < minn) {
                        minn = temp.size();
                        res = temp;
                    }
                    temp = "";
                    break;
                }
                j++;
            }
        }
        return res;
    }
};
