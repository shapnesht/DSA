class Solution {
    void f(int ind, vector<int>& candidates, int target, vector<int>& cur, vector<vector<int>>& ans) {
        if(ind == 0 && target == 0) {
            ans.push_back(cur);
            return;
        }
        if(ind < 0) return;

        if(candidates[ind] <= target) {
            cur.push_back(candidates[ind]);
            f(ind, candidates, target-candidates[ind], cur, ans);
            cur.pop_back();
        }
        f(ind-1, candidates, target, cur, ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        vector<int> cur;
        f(n-1, candidates, target, cur, ans);
        return ans;
    }
};