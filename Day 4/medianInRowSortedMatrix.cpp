class Solution{
    bool isPossible(int val, vector<vector<int>>&matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int cnt = 0;
        for(int i = 0; i < row; i++) {
            int s = 0, e = col-1;
            while(s <= e) {
                int m = s + (e - s) / 2;
                if(matrix[i][m] <= val) s = m+1;
                else e = m - 1;
            }
            cnt += e+1;
        }
        return cnt >= ((row*col+1) / 2);
    }
public:
    int findMedian(vector<vector<int>>&matrix) {
        int s = 0, e = 1e9+1;
        while(s + 1 < e) {
            int m = s + (e - s) / 2;
            if(isPossible(m, matrix)) {
                e = m;
            } else {
                s = m;
            }
        }
        return e;
    }
};