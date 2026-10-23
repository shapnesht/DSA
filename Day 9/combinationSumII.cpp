class Solution {
    int n;
    void f(int ind, vector<int>& candidates, int target, vector<int>& cur, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(cur);
            return;
        }
        if(ind < 0 || target < 0) return;

        cur.push_back(candidates[ind]);
        f(ind-1, candidates, target-candidates[ind], cur, ans);
        cur.pop_back();
        
        for(int i = ind - 1; i >= 0; i--) {
            if(candidates[i] != candidates[ind]) {
                f(i, candidates, target, cur, ans); 
                break; 
            }
        }
    }
public:
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end(), greater<int>());
        vector<vector<int>> ans;
        n = candidates.size();
        vector<int> cur;
        f(n-1, candidates, target, cur, ans);
        return ans;
    }
};