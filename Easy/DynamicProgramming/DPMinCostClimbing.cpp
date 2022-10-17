class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        short j = cost.size();
        for (short i = 2; i < j; i++)
            cost[i] += min(cost[i-1], cost[i-2]);
        return min(cost[j-1], cost[j-2]);
    }
};