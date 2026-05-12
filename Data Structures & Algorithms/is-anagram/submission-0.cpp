class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> freq;
        int slen = s.length(), tlen = t.length();
        if(slen!=tlen){
            return false;
        }
        else{

            for(int i =0; i<slen;i++){
                freq[s[i]]++;
            }

            for(int i =0; i<tlen;i++){

                if(freq.find(t[i]) == freq.end()){
                    return false;
                }

                freq[t[i]]--;

                if(freq[t[i]] == 0){
                    freq.erase(t[i]);
                }

            }
        }
        return freq.empty();
    }
};
