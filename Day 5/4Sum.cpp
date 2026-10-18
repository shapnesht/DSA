class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i + 1; j < n; j++) {
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int s = j + 1, e = n-1;
                while(s < e) {
                    int sum = nums[i] + nums[j] + nums[s] + nums[e];
                    if(sum == target) {
                        ans.push_back({nums[i], nums[j], nums[s], nums[e]});
                        s++;
                        while(s-1 >= 0 && nums[s] == nums[s-1]) s++;
                    } else if (target > sum) {
                        s++;
                    } else {
                        e--;
                    }
                }
            }
        }
        return ans;
    }
};