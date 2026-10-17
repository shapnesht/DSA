class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        int cnt[26] = {0}, ans = 1;
        int j = 0, n = s.size();
        for(int i = 0; i < n; i++) {
            int pos = s[i]-'a';
            cnt[pos]++;
            while(j < n && cnt[pos] > 1) {
                cnt[s[j]-'a']--;
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};