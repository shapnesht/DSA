class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        int n = cardScore.size();
        int totalToSubtract = n-k, mini = 0, cur = 0, i = 0, total = 0;
        while(i < n) {
            total += cardScore[i];
            if(i < totalToSubtract) {
                cur += cardScore[i];
                i++;
                if(i < totalToSubtract-1) continue;
            }
            if (i == totalToSubtract-1) {
                mini = cur;
                i++;
                continue;
            }
            cur += cardScore[i];
            cur -= cardScore[i-totalToSubtract];
            mini = min(mini, cur);
            i++;
        }
        return total - mini;
    }
};