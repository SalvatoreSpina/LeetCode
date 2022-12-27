class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        multiset<int> diffs;
        int count = 0;

        for (int i = 0; i < rocks.size(); ++i) {
            int tmp = capacity[i] - rocks[i];
            diffs.insert(tmp);
            additionalRocks += (tmp < 0) * (0 - tmp);
        }

        for (const int &n : diffs) {
            if (n <= 0) count++;
            else if (n <= additionalRocks) {
                additionalRocks -= n;
                count++;
            }
            else break;
        }
        return count;
    }
};