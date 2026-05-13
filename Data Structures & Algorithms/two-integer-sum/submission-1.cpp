class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> store;
        vector<int> res;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(store.contains(target-nums[i])){
                res.push_back(store[target-nums[i]]);
                res.push_back(i);
            }
            else{
                store[nums[i]] = i;
            }
        }
        return res;
    }
};
