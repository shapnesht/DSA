class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, maxSum = -1e9;
        for(auto& num: nums) {
            curSum += num;
            maxSum = max(maxSum, curSum);
            if(curSum < 0) {
                curSum = 0;
            }
        }
        return maxSum;
    }
};