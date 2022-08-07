class Solution {
public:
    bool rotateString(string s, string goal) {
        char c = goal[0];
        string tmp;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                tmp = s.substr(i, s.size());
                tmp += s.substr(0, i);
                if (tmp == goal) return true;
            }
        }
        return false;
    }
};