class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int it = nums[i];
            int rem = target-it;
            if(mp.find(rem) != mp.end()) {
                return {i, mp[rem]};
            }
            mp[it] = i;
        }
        return {-1, -1};
    }
};