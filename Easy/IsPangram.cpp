class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> vec(26, 0);
        for (char &c : sentence)
            vec[c-'a']++;
        for (char &c : vec)
            if (!c) return false;
        return true;
    }
};