class Solution {
    void f(string& cur, int open, int close, vector<string>& ans) {
        if(open == 0 && close == 0) {
            ans.push_back(cur);
            return;
        }

        if(open > 0) {
            cur += "(";
            f(cur, open-1, close, ans);
            cur.pop_back();
        }
        if(close > open) {
            cur += ")";
            f(cur, open, close-1, ans);
            cur.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur = "";
        f(cur, n, n, ans);
        return ans;
    }
};