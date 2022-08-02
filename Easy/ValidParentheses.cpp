class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (string::const_iterator it = s.begin(); it != s.end(); it++) {
            if (*it == '{') p.push('}');
            else if (*it == '[') p.push(']');
            else if (*it == '(') p.push(')');
            else if (!p.empty() && *it == p.top()) p.pop();
            else return false;
        }
        return p.empty();
    }
};