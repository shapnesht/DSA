class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &arr, int k) {
        int s = 0, e = (int)arr.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (arr[m] == k) return true;
            if (arr[s] == arr[m] && arr[m] == arr[e]) {
                s++;
                e--;
                continue;
            }
            if (arr[s] <= arr[m]) {
                if (arr[s] <= k && k < arr[m]) e = m - 1;
                else s = m + 1;
            } else {
                if (arr[m] < k && k <= arr[e]) s = m + 1;
                else e = m - 1;
            }
        }
        return false;
    }
};