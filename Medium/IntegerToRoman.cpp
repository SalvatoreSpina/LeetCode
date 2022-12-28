class Solution {
public:
    string intToRoman(int n) {
        string fourth_digit[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string third_digit[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string second_digit[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string first_digit[] = {"", "M", "MM", "MMM"};
        return first_digit[n / 1000] + second_digit[(n % 1000) / 100] + third_digit[(n % 100) / 10] + fourth_digit[n % 10];
    }
};