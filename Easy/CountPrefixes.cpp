class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int counter = 0;
        for (string word : words) {
            if (word == s.substr(0, word.length())) counter++;
        }
        return counter;
    }
};