class Solution {
    void numberOfInversions(int start, int end, vector<int>& nums, long long int& ans) {
        if(start >= end) return;

        int mid = start + (end - start) / 2;
        numberOfInversions(start, mid, nums, ans);
        numberOfInversions(mid+1, end, nums, ans);
        int n = mid+1, m = end+1, i = start, j = mid+1;
        vector<int> curAns;
        while(i < n && j < m) {
            if(nums[i] > nums[j]) {
                ans += n - i;
                curAns.push_back(nums[j]);
                j++;
            } else {
                curAns.push_back(nums[i]);
                i++;
            }
        }
        while(i < n) {
            curAns.push_back(nums[i]);
            i++;
        }
        while(j < m) {
            curAns.push_back(nums[j]);
            j++;
        }
        for(int k = 0; k < curAns.size(); k++) {
            nums[k+start] = curAns[k];
        }
    }
public:
    long long int numberOfInversions(vector<int> nums) {
        long long int ans = 0;
        numberOfInversions(0, nums.size()-1, nums, ans);
        return ans;
    }
};