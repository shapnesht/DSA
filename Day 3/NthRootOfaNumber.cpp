class Solution {
    int calculate(int n, int power, int num) {
        long long cur = 1;
        while(power--) {
            cur *= n;
            if(cur > num) 
                return 1;  
        }
        if(cur == num) return 0;
        return cur > num ? 1 : -1;
    }
public:
    int NthRoot(int N, int M) {
        int s = 1, e = M;
        while(s <= e) {
            int m = s+ (e-s) / 2;
            int val = calculate(m, N, M);
            if(val == 0) return m;
            else if(val > 0) e = m - 1;
            else s = m+1;
        }
        return -1;
    }
};
