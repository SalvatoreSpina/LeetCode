class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)  
            return false;
        if (x < 10)
            return true;
        string r, s = to_string(x);
        r = s;
        reverse(r.begin(), r.end());
        return (r == s);
    }
};