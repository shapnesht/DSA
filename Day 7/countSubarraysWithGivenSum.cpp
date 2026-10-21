class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        int ans = 0, curSum = 0, n = nums.size();
        map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++) {
            curSum += nums[i];
            int diff = curSum - k;
            ans += mp[diff];
            mp[curSum]++;
        }
        return ans;
    }
};