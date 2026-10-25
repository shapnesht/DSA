class Solution {
    bool isPalindromic(string tmp) {
        if(tmp.size() == 0) return false;
        int s = 0, e = tmp.size()-1;
        while(s < e) {
            if(tmp[s] != tmp[e]) return false;
            s++;
            e--;
        }
        return true;
    }
    void f(int ind, string tmp, vector<string>& cur, string& s, vector<vector<string>>& ans) {
        if(ind < 0) {
            if(isPalindromic(tmp)) {
                cur.push_back(tmp);
                ans.push_back(cur);
                cur.pop_back();
            }
            return;
        }

        f(ind-1, tmp+s[ind], cur, s, ans);
        if(isPalindromic(tmp+s[ind])) {
            cur.push_back(tmp+s[ind]);
            f(ind-1, "", cur, s, ans);
            cur.pop_back();
        }
    }
public:
    vector<vector<string> > partition(string s) {
        vector<vector<string>> ans;
        vector<string> cur;
        reverse(s.begin(), s.end());
        f(s.size()-1, "", cur, s, ans);
        return ans;
    }
};