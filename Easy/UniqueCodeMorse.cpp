class Solution {
    
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string tmp;
        set<string> response;
        for (string str : words) {
            tmp = "";
            for (char c : str) tmp += morse[c-97];
            response.insert(tmp);
        }
        return response.size();
    }
};