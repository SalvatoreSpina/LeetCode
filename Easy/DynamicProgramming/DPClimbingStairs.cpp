class Solution {
    map<int, int> memo;
    
public:
    Solution() { memo[1] = 1; memo[2] = 2; memo[3] = 3; }
    
    int climbStairs(int n) {
        if (!n || memo[n]) return memo[n];
        memo[n-1] = climbStairs(n-1);
        memo[n-2] = climbStairs(n-2);
        return memo[n-1] + memo[n-2];
    }
};