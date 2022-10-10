class Solution {
public:
    string breakPalindrome(string palindrome) {
        short s = palindrome.size();
        if (s < 2)
            return "";
        for (short i = 0; i < s / 2; i++) {
            if (palindrome[i] > 'a')  {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[s - 1] = 'b';
        return palindrome;
    }
};