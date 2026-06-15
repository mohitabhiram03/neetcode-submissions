class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s1[i]]++;
        }
        int len = s2.size();
        int i = 0;
        unordered_map<char, int> temp;
        while ((i + n - 1) < len) {
            temp = mp;
            int j = i;
            while (j - i < n) {
                if (temp.find(s2[j]) != temp.end()) {
                    temp[s2[j]]--;
                    if (temp[s2[j]] == 0) {
                        temp.erase(s2[j]);
                    }
                } else {
                    break;
                }
                j++;
            }
            if (temp.empty()) {
                return true;
            }
            i++;
        }
        return false;
    }
};