class Solution {

private:
    static inline void split(string const &str, vector<string> &out) {
        char *token = strtok(const_cast<char*>(str.c_str()), " ");
        while (token != nullptr) {
            out.push_back(string(token));
            token = strtok(nullptr, " ");
        }
    }

    static inline bool isInMap(const string &str, const unordered_map<char, string> &map) {
        for (const auto &[x, y] : map) {
            if (y == str)
                return true;
        }
        return false;
    }

public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map;
        vector<string> vec;
        split(s, vec);
        if (pattern.size() != vec.size())
            return false;

        for (int i = 0; i < pattern.size(); ++i) {
            if (map.find(pattern[i]) == map.end() && !isInMap(vec[i], map))
                map[pattern[i]] = vec[i];
            else if (map[pattern[i]] != vec[i])
                return false;
        }
        return true;
    }
};