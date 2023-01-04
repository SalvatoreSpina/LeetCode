class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int answ = 0;
        unordered_map<int, int> maps;

        for (const int &n : tasks) {
            maps[n]++;
        }
        for (const auto &[x, y] : maps){
            if (y == 1)
                return -1;
            if (y % 3 == 0)
                answ += y / 3;
            else
                answ += y / 3 + 1;
        }
        return answ;    
    }
};