class Solution {
    bool isPossible(long long cur, vector<int> nums, int h) {
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans += ceil((double)nums[i]/cur);
            if(ans > h) return false;
        }
        return true;
    }
public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        long long s = 0, e = 1e15+1;
        while(s+1 < e) {
            long long m = s + (e - s) / 2;
            if(isPossible(m, nums, h)) {
                e = m;
            } else {
                s = m;
            }
        }
        return e;
    }
};
