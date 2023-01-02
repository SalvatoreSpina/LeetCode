class Solution {
public:
    bool detectCapitalUse(string word) {
        int first_lower = islower(word[0]);
        int second_upper = isupper(word[1]);
        for (int i = 1; i < word.size(); i++) {
            if (first_lower && isupper(word[i]) || second_upper != isupper(word[i]))
                return false;
        }        
        return true;
    }
};