class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        int fl = 0;
        stack<double> st;
        for (int i = 0; i < position.size(); i++) {
            st.push(1.0*(target - cars[i].first) / cars[i].second);
        }
        double curr = st.top();
        st.pop();
        while (!st.empty()) {
            if (curr < st.top()) {
                fl += 1;
                curr = st.top();
                st.pop();
            } else {
                st.pop();
            }
        }
        return fl + 1;
    }
};
