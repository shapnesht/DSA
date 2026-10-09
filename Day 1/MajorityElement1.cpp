class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, candidate = -1;
        for(auto& it: nums) {
            if(cnt == 0) {
                cnt = 1;
                candidate = it;
                continue;
            }
            if(candidate == it) cnt++;
            else cnt--;
        }
        return candidate;
    }
};