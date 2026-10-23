class Solution {
public:
    int kDistinctChar(string& s, int k) {
        unordered_map<int, int> freq;
        int n = s.size(), j = 0, i = 0, ans = 1, cnt = 0;
        while(i < n) {
            int cur = s[i]-'a';
            freq[cur]++;
            if(freq[cur] == 1) {
                cnt++;
            }
            while(cnt > k) {
                cur = s[j]-'a';
                freq[cur]--;
                if(freq[cur] == 0) cnt--;
                j++;
            }
            ans = max(ans, i - j + 1);
            i++;
        }
        return ans;
    }
};