class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> set;
        for (vector<int> vec : matrix) {
            for (const int n : vec) {
                set.insert(n);
            }
        }
        return *next(set.begin(), k - 1);
    }
};