class Solution {
public:

   int numSquares(int n) {
        vector<int> memo(n + 1, INT_MAX);
        memo[0] = 0;
        int sq, count = 1;
       
        while (count * count <= n) {
            sq = count * count;
            for(int i = sq; i < n+1; i++) {
                memo[i] = min(memo[i-sq] + 1, memo[i]);
            }
            count++;
        }
        return memo[n];
    }
    
};