class Solution {

public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        vector<string> words, res;
        size_t pos = 0;
        
        while ((pos = text.find(" ")) != string::npos) {
            words.push_back(text.substr(0, pos));
            text.erase(0, pos + 1);
        }
        words.push_back(text.substr(0, pos));
        
        for (size_t i = 0; i < words.size()-2; i++) {
            if (words[i] == first && words[i+1] == second)
                res.push_back(words[i+2]);
        }
        
        return res;
        
    }
};