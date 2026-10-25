class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int ans = 0, maxLeft = 0, maxRight = 0;
        while(i <= j) {
            if(arr[i] <= arr[j]) {
                if(arr[i] > maxLeft) {
                    maxLeft = arr[i];
                } else {
                    ans += maxLeft - arr[i];
                }
                i++;
            } else {
                if(arr[j] > maxRight) {
                    maxRight = arr[j];
                } else {
                    ans += maxRight - arr[i];
                }
                j--;
            }
        }
        return ans;
    }
};