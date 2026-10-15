class Solution {
    bool isPossible(int cur, vector<int> &nums, int k) {
        int cnt = 1, n = nums.size();
        for(int i = 0; i < n;) {
            int item = nums[i]; i++;
            while(i < n && nums[i] < item+cur) {
                i++;
            }
            if(cur == 3)cout << nums[i] << " " ;
            if(i < n) cnt++;
        }
        return cnt >= k;
    }
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int s = 0, e = 1e9+1;
        while(s + 1 < e) {
            int m = s + (e - s) / 2;
            if(isPossible(m, nums, k)) {
                s = m;
            } else {
                e = m;
            }
        }
        return s;
    }
};