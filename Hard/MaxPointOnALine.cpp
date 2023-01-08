class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int size = points.size();
        if (size == 1) {
            return 1;
        }
        int answ = 2;
        for (int i = 0; i < size; i++) {
            unordered_map<double, int> hash_map;
            for (int j = 0; j < size; j++) {
                if (j != i) {
                    hash_map[atan2(points[j][1] - points[i][1], points[j][0] - points[i][0])]++;
                }
            }
            for (auto &[h, count] : hash_map) {
                answ = max(answ, count + 1);
            }
        }
        return answ;
    }
};