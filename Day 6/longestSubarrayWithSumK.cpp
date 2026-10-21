class Solution {
public:
    int findPeakElement(vector<int> &arr) {
        int n = arr.size(), i = n / 2;
        if(n == 1) return 0;
        if(n==2) return arr[0] < arr[1];
        while(i > 0 && i < n-1) {
            if(i-1 >= 0 && arr[i-1] > arr[i]) i--;
            else if(i+1 < n && arr[i+1] > arr[i]) i++;
            else if (i-1 >= 0 && i+1 < n && arr[i] > arr[i-1] && arr[i] > arr[i+1]) return i;
        }
        return i;
    }
};