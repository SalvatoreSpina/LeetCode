class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int total = 0, start = 0, subsum = INT_MAX;
        for (int i = 0; i < size; ++i) {
            total += gas[i] - cost[i];
            if (total < subsum) {
                subsum = total;
                start = i + 1;
            }
        }
        return total >= 0 ? start % size : -1; 
    }
};