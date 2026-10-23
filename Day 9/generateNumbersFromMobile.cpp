class Solution {
    void f(int cur, string s, int n, string& digits, unordered_map<char, vector<int>>& mp, vector<string>& ans) {
        if(cur == n) {
            ans.push_back(s);
            return;
        }
        for(auto& it: mp[digits[cur]]) {
            string tmp = s;
            tmp += it;
            f(cur+1, tmp, n, digits, mp, ans);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, vector<int>> mp = {
            {'2', {'a', 'b', 'c'}},{'3', {'d', 'e', 'f'}},{'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}},{'6', {'m', 'n', 'o'}},{'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}},{'9', {'w', 'x', 'y', 'z'}}
        };
        vector<string> ans;
        f(0, "", digits.size(), digits, mp, ans);
        return ans;
    }
};