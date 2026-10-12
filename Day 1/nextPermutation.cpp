class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n-2;
        while(i >= 0) {
            if(nums[+1] > nums[i]) break;
            i--;
        }
        if(i == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int j = n-1; j >= 0; j--) {
            if(nums[j] > nums[i]){
                swap(nums[i], nums[j]);
                reverse(nums.begin()+i+1, nums.end());
                return;
            }
        }
    }
};