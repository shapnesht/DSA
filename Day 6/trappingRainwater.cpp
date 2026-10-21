class Solution
{
public:
    int trap(vector<int> &height){
        int n = height.size();
        int leftMax = 0, rightMax = 0;
        int ans = 0, i = 0, j = n-1;
        while(i < j) {
            if(height[i] <= height[j]) {
                if(leftMax > height[i]) {
                    ans += leftMax - height[i];
                } else {
                    leftMax = height[i];
                }
                i++;
            } else {
                if(rightMax > height[j]) {
                    ans += rightMax - height[j];
                } else {
                    rightMax = height[j];
                }
                j--;
            }
        }
        return ans;
    }
};