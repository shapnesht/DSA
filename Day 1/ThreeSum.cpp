class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++) {
            int s = i+1, e = n-1;
            while(s < e) {
                int curStart = nums[s];
                int sum = nums[s] + nums[i] + nums[e];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[s], nums[e]});
                    s++;
                    while(s < e && curStart == nums[s]) s++;
                } else if (sum < 0) {
                    s++;
                } else {
                    e--;
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) {
                i++;
            }
        }
        return ans;
    }
};