class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> answ(2);
        map<int, int> players;
        
        for (vector<int> &vec : matches) {
            if (!players[vec[0]]) vec[0] = 0;
            players[vec[1]]++;
        }
        for (auto &player : players) {
            if (player.second == 0)
                answ[0].push_back(player.first);
            else if (player.second == 1)
                answ[1].push_back(player.first);
        }
        return answ;
    }
};