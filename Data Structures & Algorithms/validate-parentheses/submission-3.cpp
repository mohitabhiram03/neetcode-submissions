class Solution {
   public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return 0;
        }
        stack<char> st;
        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()){
                    return false;
                    }
                if (c == ')') {
                    if (st.top() != '(') {
                        return false;
                    }
                    st.pop();
                }
                if (c == '}') {
                    if (st.top() != '{') {
                        return false;
                    }
                    st.pop();
                }
                if (c == ']') {
                    if (st.top() != '[') {
                        return false;
                    }
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
