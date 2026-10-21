class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int ans = 0, curXor = 0, n = nums.size();
        map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++) {
            curXor ^= nums[i];
            int diff = curXor ^ k;
            ans += mp[diff];
            mp[curXor]++;
        }
        return ans;
    }
};