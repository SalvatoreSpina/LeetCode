class Solution {
    
    map<pair<int, int>, int> memo;
    
public:
    int uniquePaths(int m, int n) {
        map<pair<int, int>, int>::const_iterator tmp = memo.find(make_pair(m, n));
        if (tmp != memo.end()) return tmp->second;
        if (m == 1 && n == 1) return 1;
        if (m == 0 || n == 0) return 0;
        memo[make_pair(m, n)] = uniquePaths(m, n-1) + uniquePaths(m-1, n);
        return memo[make_pair(m, n)];
    }
};