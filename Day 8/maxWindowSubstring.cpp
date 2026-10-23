class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int, int> mp, cntT;
        for(auto& it: t) cntT[it]++;
        int cur = 0, ansIndx = 0, j = 0, maxVal = INT_MAX, n = s.size(), m = t.size();

        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
            if(mp[s[i]] == cntT[s[i]] && mp[s[i]] >= cntT[s[i]]) {
                cur += mp[s[i]];
            }
            while (j < n && cur >= m) {
                if(maxVal > i-j+1) {
                    ansIndx = j;
                    maxVal = i - j + 1;
                }
                mp[s[j]]--;
                if(mp[s[j]] < cntT[s[j]] && mp[s[j]]+1 == cntT[s[j]]) {
                    cur -= mp[s[j]]+1;
                }
                j++;
            }
        }
        if(maxVal == INT_MAX) return "";
        return s.substr(ansIndx, maxVal);
    }
};