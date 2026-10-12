class Solution{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target){
        int r = 0, n = matrix.size();
        int c = matrix[0].size() - 1, m = matrix[0].size();

        while(r < n && c >= 0) {
            if(matrix[r][c] == target) return true;

            if(matrix[r][c] > target) c--;
            else r++;        
        }
        return false;
    }
};