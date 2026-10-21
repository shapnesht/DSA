class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int j = 0, ans = 0, curSum = 0, n = nums.size();
        map<int, int> mp;
        mp[0] = 0;
        for(int i = 0; i < n; i++) {
            curSum += nums[i];
            int diff = curSum - k;
            if(mp.find(diff) != mp.end()) {
                ans = max(ans, i-mp[diff]+1);
            }
            if(mp.find(curSum) == mp.end()) {
                mp[curSum] = i+1;
            }
        }
        return ans;
    }
};
