class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int counter = 0;
        map<string, int> m1, m2;
        
        for (string word : words1)
            m1[word]++;
        
        for (string word : words2)
            m2[word]++;
        
        for (string word : words1) {
            if (m1[word] == 1 && m2[word] == 1) counter++;
        }
        return counter;
    }
};