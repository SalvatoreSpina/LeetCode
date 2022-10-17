class Solution {

public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> cord;
        int x = 0, y = 0;
        cord.insert({x, y});
        for (const char &c : path) {
            x += (c == 'E') - (c == 'W');
            y += (c == 'N') - (c == 'S');
            if (cord.find({x, y}) != cord.end()) return true;
            else cord.insert({x, y});
        }
        return false;
    }
};