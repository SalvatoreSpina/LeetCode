class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int answ = 0;
        sort(costs.begin(), costs.end());
        for (const int &n : costs) {
            if (n <= coins) {
                coins -= n;
                answ++;
            }
            else {
                return answ;
            }
        }
        return answ;
    }
};