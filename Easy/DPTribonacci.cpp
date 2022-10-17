class Solution {
    
    map<int, int> memo;

public:
    
    Solution() {
        memo[0] = 0;
        memo[1] = 1;
        memo[2] = 1;
        memo[3] = 2;
    }
    
    int tribonacci(int n) {
        if (n == 0 || memo[n]) return memo[n];
        memo[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return memo[n];
    }