#define check INT_MAX/10

class Solution {
  
public:
    int myAtoi(string s) {
       int ret = 0, sign = 1, i = 0;
        while (isspace(s[i])) i++;
        if (s[i] == '+' || s[i] == '-') sign = s[i++] == '+' ?: -1;
        while (isdigit(s[i])) {
            if (ret > check || ((ret == check) && s[i] - '0' > 7))
                return sign > 0 ? INT_MAX : INT_MIN;
            ret = 10 * ret + (s[i++] - '0');
        }
        return sign * ret;
    }
};