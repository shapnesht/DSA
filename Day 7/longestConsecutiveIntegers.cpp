class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0;
        for(auto& it: nums) st.insert(it);
        for(auto& it: st) {
            if(st.find(it-1) == st.end()) {
                int cnt = 1, cur = it+1;
                while(st.find(cur) != st.end()) {
                    cnt++;
                    cur++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};