class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> que;
        int count = 0, stationId = 0, range = startFuel;
        while (range < target) {
            while (stationId < stations.size() && stations[stationId][0] <= range) {
                que.push(stations[stationId++][1]);
            }
            if (que.empty()) return -1;
            range += que.top();
            que.pop();
            count++;
        }
        return count;
    }
};