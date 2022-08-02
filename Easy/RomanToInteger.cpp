class Solution {
public:
    
    int romanToInt(string s) {
        int n = 0;
        for (size_t i = 0; i < s.length(); i++) {
            
            if (s[i] == 'M')
                n += 1000;
            
            else if (s[i] == 'D')
                n += 500;
            
            else if (s[i] == 'C') {
                if (s[i+1] == 'M') {
                    n += 900;
                    i++;
                    continue;
                }
                else if (s[i+1] == 'D') {
                    n += 400;
                    i++;
                    continue;
                }
                else n += 100;
            }
            
            else if (s[i] == 'L')
                    n += 50;
                
            else if (s[i] == 'X') {
                if (s[i+1] == 'C') {
                    n += 90;
                    i++;
                    continue;
                }
                else if (s[i+1] == 'L') {
                    n += 40;
                    i++;
                    continue;
                }
                else n += 10;
            }
                
            else if (s[i] == 'V')
                n += 5;
                
            else if (s[i] == 'I') {
                if (i == s.length() - 1)
                    return n+1;
                if (s[i+1] == 'X') {
                    n += 9;
                    i++;
                    continue;
                }
                else if (s[i+1] == 'V') {
                    n += 4;
                    i++;
                    continue;
                }
                else n += 1;
            }
        }
        return n;
    }
    
};