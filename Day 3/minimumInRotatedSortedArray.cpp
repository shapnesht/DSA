class Solution {
public:
    int findMin(vector<int> &arr)  {
        int s = 0, n = arr.size(), e = n - 1, pivot = -1;
        if(n == 1) return arr[0];
        while(s + 1 <= e) {
            int m = s + (e - s) / 2;
            if(arr[m] > arr[m+1]) {
                return arr[m+1];
            } else if(arr[m] < arr[n-1]) {
                e = m;
            } else {
                s = m;
            }
        }
        return arr[0];
    }
};