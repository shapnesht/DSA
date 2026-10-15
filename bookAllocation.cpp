class Solution {
    bool isPossible(int curPage, vector<int> &nums, int m) {
        int minStudents = 0, n = nums.size();
        for(int i = 0; i < n;) {
            int sum = 0;
            if(nums[i] > curPage) return false;
            while(i < n && sum + nums[i] <= curPage) {
                sum += nums[i];
                i++;
            }
            minStudents++;
        }
        cout << minStudents << " " << curPage << endl;
        return minStudents <= m;
    }
public:
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(m > n) return -1;
        int s = 0, e = 1e9 + 1;
        while(s + 1 < e) {
            int mid = s + (e - s) / 2;
            if(isPossible(mid, nums, m)) {
                e = mid;
            } else {
                s = mid;
            }
        }
        return e;
    }
};