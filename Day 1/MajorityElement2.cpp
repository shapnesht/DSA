class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN, n = nums.size();
        for(auto &it: nums) {
            if(cnt1 == 0 && it != ele2) {
                cnt1 = 1;
                ele1 = it;
                continue;
            } else if (cnt2 == 0 && it != ele1) {
                cnt2 = 1;
                ele2 = it;
                continue;
            } else if(ele1 == it) {
                cnt1++;
            } else if(ele2 == it) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for(auto& it: nums) {
            if(it == ele1) cnt1++;
            if(it == ele2) cnt2++;
        }
        if(cnt1 > n/3 && cnt2 > n/3) 
            return {ele1, ele2};
        if(cnt1 > n/3) 
            return {ele1};
        if(cnt2 > n/3) 
            return {ele2};
        return {};
    }
};